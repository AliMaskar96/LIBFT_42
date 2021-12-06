/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:46:10 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/25 05:06:12 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	i = ft_strlen(str);
	while (i != 0)
	{
		if (str[i] == ((char)c))
		{
			p = (char *)(&str[i]);
			return (p);
		}
		else
			i--;
	}
	if (str[i] == ((char)c))
	{
		p = (char *)(&str[i]);
		return (p);
	}
	else
		return (0);
}

/*int main()
{
	char str [] = "abc********ef3g****dijk";
	printf("%s\n", ft_strrchr(str, '*'));
}*/