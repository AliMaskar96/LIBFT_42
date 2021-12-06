/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:42:14 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 11:46:15 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*temp;

	temp = (char *) malloc (count * size);
	if (!temp)
		return (0);
	ft_memset(temp, 0, count * size);
	return (temp);
}

/*int main()
{
	int *p1;	
	int i = 0;

	p1 = (int *)calloc(sizeof(char), 4); 

	while (i < 4)
	{
		printf("%d\n", p1[i]);
		i++;
	}
	//printf("%s\n", ft_calloc(5, sizeof(int)));
}*/