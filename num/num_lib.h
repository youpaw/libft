//
// Created by youpaw on 29.02.2020.
//

#ifndef NUM_LIB_H
# define NUM_LIB_H

#include <zconf.h>

int					ft_numlen(ssize_t num);
int					ft_numlen_base(ssize_t num, int base);
int					ft_atoi(const char *str);
ssize_t 			ft_putnbr(int n);
ssize_t	 			ft_putnbr_fd(int n, int fd);

#endif //NUM_LIB_H
