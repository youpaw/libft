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

# undef numlen
# undef numlen_base
# undef atoi
# undef atoll
# undef putnbr
# undef fdputnbr

int					numlen(int num);
int					numlen_base(int num, int base);
int					atoi(const char *str);
long long			atoll(const char *str);
int					putnbr(int n);
int					fdputnbr(int n, int fd);

#endif
