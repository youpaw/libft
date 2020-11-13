/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_char.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 22:57:22 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 22:57:24 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CC_CHAR_H
# define CC_CHAR_H
# define CHAR_BUFF_SIZE 1024
# undef isupper
# undef islower
# undef isalpha
# undef isalnum
# undef isspace
# undef isdigit
# undef isascii
# undef isprint
# undef iswspace
# undef putchar
# undef fdputchar
# undef tolower
# undef toupper
# undef getch

int			isupper(int c);
int			islower(int c);
int			isalpha(int c);
int			isalnum(int c);
int			isspace(int c);
int			isdigit(int c);
int			isascii(int c);
int			isprint(int c);
int			iswspace(int c);
int			putchar(int c);
int			fdputchar(int c, int fd);
int			tolower(int c);
int			toupper(int c);
int			sh_getch(void);
int			utf8_sizeof_symbol(char ch);

#endif
