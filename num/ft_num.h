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

#ifndef FT_NUM_H
# define FT_NUM_H

int					ft_numlen(int num);
int					ft_numlen_base(int num, int base);
int					ft_atoi(const char *str);
long long			ft_atoll(const char *str);
int					ft_putnbr(int n);
int					ft_fdputnbr(int n, int fd);

#endif
