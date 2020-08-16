/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 20:25:30 by dbutterw          #+#    #+#             */
/*   Updated: 2020/01/06 14:39:22 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cc_file.h"
#include "search_lib.h"
#include "str_lib.h"
#include "mem_lib.h"
#include <unistd.h>

static int 	cmp(int fd1, int fd2, void *param)
{
	(void)param;
	return (fd1 - fd2);
}

static t_avl	*find_fd(t_avl *files, int fd)
{
	int dif;

	if (!files)
		return (NULL);
	dif = cmp(fd, ((t_file*)files)->fd, NULL);
	if (dif > 0)
		return (find_fd(files->right, fd));
	else if (dif < 0)
		return (find_fd(files->left, fd));
	else
		return (files);
}

static t_file	*init_file(int fd)
{
	t_file *file;

	file = (t_file *)ft_xmalloc(sizeof(t_file));
	file->fd = fd;
	file->buff = ft_strnew(0);
	return (file);
}

static int		readline(t_file *file, char **line)
{
	char	buff[BUFF_SIZE + 1];
	char	*rst;
	char	*tmp;
	size_t	size;

	size = 1;
	while (size > 0)
	{
		if ((rst = ft_strchr(file->buff, '\n')))
			*rst++ = '\0';
		tmp = ft_strjoin(*line, file->buff);
		free(*line);
		*line = tmp;
		if (rst)
		{
			*rst ? ft_strcpy(file->buff, rst) : ft_bzero(file->buff, 1);
			return (1);
		}
		size = read(file->fd, buff, BUFF_SIZE);
		if (!size && **line)
			return (1);
		file->buff = ft_strsub(buff, 0, size);
	}
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_avl		*files;
	t_avl				*file;

	if (fd < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (!(file = find_fd(files, fd)))
	{
		file = ft_new_node(init_file(fd));
		files = ft_insert_avl(files, file, NULL, \
        (int (*)(const void *, const void *, void *)) &cmp);
	}
	if (!file->content)
		file->content = init_file(fd);
	*line = ft_strnew(0);
	return (readline(file->content, line));
}
