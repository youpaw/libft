/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:47 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:47 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H
# include <stddef.h>
# include <stdint.h>

void		*ft_xmalloc(size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memalloc(size_t size);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		ft_memdel(void **ap);
void		ft_bzero(void *s, size_t n);

uint16_t	ft_swap_uint16(uint16_t x);
uint32_t	ft_swap_uint32(uint32_t x);
uint64_t	ft_swap_uint64(uint64_t x);

int16_t		ft_swap_int16(int16_t x);
int32_t		ft_swap_int32(int32_t x);
int64_t		ft_swap_int64(int64_t x);

#endif
