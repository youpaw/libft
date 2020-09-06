//
// Created by Darth Butterwell on 9/6/20.
//

#ifndef CC_ARR2_H
#define CC_ARR2_H

#include <stddef.h>

void			arr2_del(char **arr);
size_t			arr2_get_size(const char **m);
void			arr2_print(const char **args, const char *st, const char *en);
void			arr2_quick_sort(void **items, int left, int right,
								int (*cmp)(const void *l, const void *r));

#endif //CC_ARR2_H
