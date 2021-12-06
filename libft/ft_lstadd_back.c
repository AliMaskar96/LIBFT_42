/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:55:25 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 10:02:51 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*temp;

	if ((*alst) == NULL)
	{
		(*alst) = new;
		return ;
	}
	temp = (*alst);
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = new;
}

/*void afficher(t_list *head)
{
	while(head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}

int main()
{
	t_list *head = NULL;
	t_list *new;
	t_list *first;

	new = ft_lstnew("Hello");
	first = ft_lstnew("1337");
	ft_lstadd_back(&head, new);
	ft_lstadd_back(&head, first);
	afficher(head);
}*/