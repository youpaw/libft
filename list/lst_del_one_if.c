//
// Created by Azzak Omega on 8/27/20.
//

#include "cc_lst.h"
# include <stdlib.h>

int		lst_del_one_if(t_list **alst, const void *content,
						 int (*cmp)(const void *, const void *),
						 void (*del)(void *))
{
	t_list *prev;
	t_list *head;

	if (!alst || !*alst || !del || !content)
		return (1);
	head = *alst;
	prev = NULL;
	while (*alst && cmp((*alst)->content, content) != 0)
	{
		prev = *alst;
		*alst = (*alst)->next;
	}
	if (*alst)
	{
		if (*alst == head)
			head = head->next;
		else
			prev->next = (*alst)->next;
		lst_del_one(alst, del);
		*alst = head;
		return (0);
	}
	*alst = head;
	return (1);
}
