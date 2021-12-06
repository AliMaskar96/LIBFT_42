/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:00:13 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 17:05:15 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*p;

	if (!(s))
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	else
		p = malloc (sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (i < len)
		{
			p[i] = ((char *)s)[start];
			i++;
			start++;
		}
		p[i] = '\0';
		return (p);
	}
}

/*int main()
{
	char s [] = "Hello 1337";
	printf("%s\n", ft_substr(s, 0, 5));
}*/