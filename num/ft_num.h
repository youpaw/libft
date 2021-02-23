/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbutterw <dbutterw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 16:47:23 by dbutterw          #+#    #+#             */
/*   Updated: 2021/02/23 16:47:23 by dbutterw         ###   ########.fr       */
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
