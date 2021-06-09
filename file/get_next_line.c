/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:49:01 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:49:01 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"
#include "ft_avl.h"
#include "ft_str.h"
#include "ft_mem.h"
#include <unistd.h>
#include <stdlib.h>

static int	cmp(const int *fd1, const int *fd2)
{
	return (*fd1 - *fd2);
}

static void	del(void *str)
{
	free(str);
}

static void	insert_file(t_avl_obj *files, int fd)
{
	t_avl_pair	pair;

	pair.key = ft_xmalloc(sizeof(int));
	ft_memmove(pair.key, &fd, sizeof(int));
	pair.value = ft_strnew(0);
	ft_avl_insert(files, &pair);
}

static int	readline(t_avl_pair *file, char **line)
{
	char	buff[FILE_BUFF_SIZE + 1];
	char	*rst;
	char	*tmp;
	size_t	size;

	size = 1;
	while (size > 0)
	{
		rst = ft_strchr(file->value, '\n');
		if (rst)
			*rst++ = '\0';
		tmp = ft_strjoin(*line, file->value);
		free(*line);
		*line = tmp;
		if (rst)
			ft_strncpy(file->value, rst, ft_strlen(rst) + 1);
		if (rst)
			return (1);
		size = read(*(int *)(file->key), buff, FILE_BUFF_SIZE);
		if (!size && **line)
			return (1);
		free(file->value);
		file->value = ft_strsub(buff, 0, size);
	}
	return (0);
}

int	get_next_line(const int fd, char **line)
{
	static t_avl_obj	*files = NULL;
	t_avl_pair			*file;

	if (fd < 0 || !line || read(fd, NULL, 0) < 0)
		return (-1);
	if (!files)
		files = ft_avl_new((int (*)(const void *, const void *)) & cmp, &del);
	file = ft_avl_get_pair(files, &fd);
	if (file)
	{
		insert_file(files, fd);
		file = ft_avl_get_pair(files, &fd);
	}
	*line = ft_strnew(0);
	return (readline(file, line));
}
