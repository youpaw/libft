//
// Created by Darth Butterwell on 9/6/20.
//

#ifndef CC_ARR2_H
#define CC_ARR2_H

#include <stddef.h>

void			quick_sort(void **items, int left, int right,
						   int (*cmp)(const void *l, const void *r));

#endif //CC_ARR2_H
