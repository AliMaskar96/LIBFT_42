/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:56:33 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 11:00:47 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *a))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*void afficher(t_list *head)
{
	while(head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
}

void f(void *content)
{

	char *str = (char *) content;
	ft_strlcpy(str, "hhhh",5);
}

int main()
{
	t_list *head = NULL;
	t_list *new;
	t_list *first;

	new = ft_lstnew(ft_strdup("156456596"));
	first = ft_lstnew(ft_strdup("123456454"));
	ft_lstadd_back(&head, new);
	ft_lstadd_back(&head, first);

	ft_lstiter(head, &f);
	
	afficher(head);
}*/