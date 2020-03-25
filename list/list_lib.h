
#ifndef LIST_LIB_H
# define LIST_LIB_H
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);

void				ft_lstdelone(t_list **alst, void (*del)(void*));

void				ft_lstdel(t_list **alst, void (*del)(void *));

void				ft_lstadd(t_list **alst, t_list *new);

void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));

t_list				*ft_lstmap(t_list *lst, t_list *f(t_list *elem));

void				ft_lstcircle(t_list *list);

void				ft_lstdelcircle(t_list **list, void (*del)(void*));

void				ft_lstaddsort(t_list **list, t_list *newlist, void *params, \
		int (*cmp)(const void *, const void *, void *));

#endif //LIST_LIB_H
