/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:59:42 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/25 05:08:14 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while ((*str1 || *str2) && i < n)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
			i++;
			str1++;
			str2++;
	}
	return (0);
}

/*int main()
{
	char s1[] = "abcdafgh";
	char s2[] = "abcdbijk";
	printf("%d\n", ft_strncmp(s1, s2, 5));
}*/