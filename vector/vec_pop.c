//
// Created by youpaw on 10/2/20.
//

#include "cc_vec.h"

int 				vec_pop(void *data, t_vec *vector)
{
	int error;

	if (!(error = vec_get_last(data, vector)))
		vec_rm_last(vector);
	return (error);
}
