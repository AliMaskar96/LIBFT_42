/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:44:39 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/28 01:59:52 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	while (str[i])
	{
		if (str[i] == ((char)c))
		{
			p = (char *)(&str[i]);
			return (p);
		}
		else
			i++;
	}
	if (str[i] == c)
	{
		p = (char *)(&str[i]);
		return (p);
	}
	else
		return (0);
}

/*int main()
{
	char str[] = "abc35456";
	printf("%s\n", ft_strchr(str, 'c'));
}*/
