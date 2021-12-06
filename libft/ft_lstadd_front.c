/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:55:32 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 09:40:14 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = (*alst);
	(*alst) = new;
}

/*void afficher(t_list *head)
{
	while(head != NULL)
	{
		printf("%s \n",head->content);
		head=head->next;
	}
}

int main()
{
	t_list *head=NULL;
	t_list *new;
	t_list *first;
	
	first = ft_lstnew("Hello");
	new = ft_lstnew("1337");
	
	ft_lstadd_front(&head, new);
	ft_lstadd_front(&head, first);

	afficher(head);
}*/