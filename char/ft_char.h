/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:51:16 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:51:16 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHAR_H
# define FT_CHAR_H
# define CHAR_BUFF_SIZE 1024

int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isspace(int c);
int			ft_isdigit(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_iswspace(int c);
int			ft_putchar(int c);
int			ft_fdputchar(int c, int fd);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_getch(void);
int			ft_utf8_sizeof_symbol(char ch);

#endif
