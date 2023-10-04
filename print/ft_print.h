//
// Created by youpaw on 10/4/23.
//

#ifndef WOODY_WOODPACKER_FT_PRINT_H
#define WOODY_WOODPACKER_FT_PRINT_H

#include <unistd.h>

void		ft_fdputendl(char const *s, int fd);
int			ft_fdputs(const char *restrict s, int stream);
void		ft_putendl(char const *s);
int			ft_puts(char const *s);
void		fdputhex(const void *data, size_t size, int fd);
void		puthex(void *data, size_t size);

#endif //WOODY_WOODPACKER_FT_PRINT_H
