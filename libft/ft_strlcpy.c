/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:45:33 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/27 22:50:37 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = ((char *)src)[i];
			i++;
		}
	dest[i] = '\0';
		return (ft_strlen (src));
	}
}

/*int main()
{
	char src [] = "123456789";
	char dst [] = "00000";
	char dst2 [] = "00000";
	printf("%zu\n", ft_strlcpy(dst, src, 4));
	ft_strlcpy(dst, src, 4);
	strlcpy(dst2,src,4);
	printf("%s\n", dst);
	printf("%s\n", dst2);
}*/