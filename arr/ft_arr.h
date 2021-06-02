/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 22:02:39 by dbutterw          #+#    #+#             */
/*   Updated: 2021/03/22 22:13:39 by dbutterw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARR_H
# define FT_ARR_H

# include <stddef.h>

void		ft_arr_quick_sort(void **items, size_t size,
					   int (*cmp)(const void *, const void *));
void		ft_arr_del(void ***arr, void (*del)(void *));
void		ft_narr_del(void ***arr, size_t n, void (*del)(void *));
size_t		ft_arr_get_size(void **arr);

#endif
