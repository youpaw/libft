/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_sort.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:00:56 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:00:59 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CC_SORT_H
# define CC_SORT_H

# include <stddef.h>

void		quick_sort(void **items, int left, int right,\
	int (*cmp)(const void *l, const void *r));

#endif
