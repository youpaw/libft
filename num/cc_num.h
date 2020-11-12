/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cc_num.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlorrine <hlorrine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 23:00:11 by hlorrine          #+#    #+#             */
/*   Updated: 2020/11/12 23:00:14 by hlorrine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CC_NUM_H
# define CC_NUM_H

# include <zconf.h>
# undef numlen
# undef numlen_base
# undef atoi
# undef atoll
# undef putnbr
# undef fdputnbr

int					numlen(ssize_t num);
int					numlen_base(ssize_t num, int base);
int					atoi(const char *str);
long long			atoll(const char *str);
ssize_t				putnbr(int n);
ssize_t				fdputnbr(int n, int fd);

#endif
