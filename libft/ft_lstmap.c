/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:54:22 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 11:05:00 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *nod, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (nod == NULL)
	{
		return (NULL);
	}
	else
	{
			new->content = (*f)(nod->content);
			new->next = ft_lstmap(nod->next, f, del);
		if (new == NULL)
			ft_lstclear(&new, del);
	}
	return (new);
}

/*void afficher(t_list *head)
{
	while(head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}

void*  f(void *a)
{
	*(char *)a+=1;
	return a;
}

void  del(void *b)
{
	free(b);
}

int main()
{
	t_list *head=NULL;
	t_list *p1,*p2,*p3;
	t_list *head2;


	p1=ft_lstnew(strdup("0"));
	p2=ft_lstnew(strdup("a"));
	p3=ft_lstnew(strdup("1"));

	ft_lstadd_back(&head,p1);
	ft_lstadd_back(&head,p2);
	ft_lstadd_back(&head,p3);

	head2 = ft_lstmap(head,f,del);

	afficher(head2);
}*/