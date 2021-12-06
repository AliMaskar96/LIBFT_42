/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:55:41 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 10:53:30 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if ((!lst) || (!del))
		return ;
	while (*lst)
	{
		*lst = (*lst)->next;
		ft_lstdelone(temp, del);
		temp = *lst;
	}
}

/*void afficher(t_list *head)
{
	while(head != NULL)
	{
		printf("%s \n",head->content);
		head=head->next;
	}
}

void del(void *p)
{
	free(p);
}

int main()
{
	t_list *head=NULL;
	t_list *p1,*p2,*p3;

	p1=ft_lstnew(strdup("!!"));
	p2=ft_lstnew(strdup("1337"));
	p3=ft_lstnew(strdup("Hello"));

	ft_lstadd_front(&head,p1);
	ft_lstadd_front(&head,p2);
	ft_lstadd_front(&head,p3);

	ft_lstclear(&head,del);

	afficher(head);
}*/