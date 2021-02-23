/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getch.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:57:29 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:57:31 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"
#include "ft_mem.h"
#include <unistd.h>
#include "ft_str.h"

static int		get_char_len(char buf[CHAR_BUFF_SIZE], int *escape_flag)
{
	int len;

	if (buf[0] == '\0')
	{
		read(STDIN_FILENO, buf, CHAR_BUFF_SIZE);
		*escape_flag = 0;
	}
	if (buf[0] == '\33' && buf[1] == '\133')
	{
		len = 2;
		*escape_flag = 1;
	}
	else
	{
		if (*escape_flag)
			len = 4;
		else
			len = ft_utf8_sizeof_symbol(buf[0]);
	}
	return (len);
}

int				ft_getch(void)
{
	static char	buf[CHAR_BUFF_SIZE];
	static int	escape_flag;
	char		ch[5];
	int			len;

    ft_bzero(ch, 5);
	len = get_char_len(buf, &escape_flag);
    ft_strncpy(ch, buf, len);
    ft_memmove(buf, &buf[len], CHAR_BUFF_SIZE - len);
    ft_bzero(&buf[CHAR_BUFF_SIZE - len], len);
    ft_memcpy(&len, ch, sizeof(int));
	return (len);
}
