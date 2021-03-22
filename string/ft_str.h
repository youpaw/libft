/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:46:55 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:46:55 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H
# include <stddef.h>

void		ft_fdputendl(char const *s, int fd);
int			ft_fdputs(const char *restrict s, int stream);
char		*ft_itoa(long long int n);
char		*ft_itoabase(size_t n, size_t base, char reg);
char		*ft_strnjoin(const char **arr);
void		ft_putendl(char const *s);
int			ft_puts(char const *s);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strchr(const char *s, int c);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dst, const char *src);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s1);
int			ft_strequ(char const *s1, char const *s2);
size_t		ft_strhash(const unsigned char *str);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strjoin(char const *s1, char const *s2);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
char		*ft_strncpy(char *dest, const char *src, size_t n);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strrchr(const char *s, int c);
char		**ft_strsplit(char const *s);
char		**ft_strsplitcharset(char const *s, char *charset);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s);
size_t		ft_utf8_display_strlen(char *str);
int			ft_strisnum(const char *str);
int			ft_strispath(const char *str);

#endif
