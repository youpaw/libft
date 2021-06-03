//
// Created by Darth Butterwell on 6/3/21.
//

#include <stdlib.h>

int g_ac = 0;
int g_nc = 0;
const char **g_av = NULL;
const char **g_env = NULL;

__attribute__ ((constructor(201)))
void 	ft_init(int ac, const char **av, const char **env)
{
	g_ac = ac;
	g_av = av;
	g_env = env;
}
