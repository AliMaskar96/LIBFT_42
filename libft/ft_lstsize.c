/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:57:06 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 09:56:48 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*temp;

	temp = lst;
	count = 0;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
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
	t_list *last;
	
	new = ft_lstnew("Hello");
	first = ft_lstnew("1337");
	last = ft_lstnew("!!");

	
	ft_lstadd_front(&head, last);
	ft_lstadd_front(&head, first);
	ft_lstadd_front(&head, new);

	printf("%d\n", ft_lstsize(new));

	afficher(new);
}*/