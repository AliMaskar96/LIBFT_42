/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:56:41 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 10:01:48 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	if (!lst)
		return (NULL);
	temp = lst;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp);
}

/*int main()
{
	t_list *head = NULL;
	t_list *new;
	t_list *first;
	new  = ft_lstnew("Hello");
	first = ft_lstnew("1337");
	ft_lstadd_front(&head, first);
	ft_lstadd_front(&head,new);
	t_list *p = ft_lstlast(head);
	printf("%s\n", p -> content);
}*/