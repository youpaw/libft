//
// Created by Darth Butterwell on 6/3/21.
//

#ifndef FT_ENV_H
#define FT_ENV_H

extern int			g_ac;
extern int			g_nc;
extern const char	**g_av;
extern const char	**g_env;

void 	ft_init(int ac, const char **av, const char **env);

#endif //FT_ENV_H
