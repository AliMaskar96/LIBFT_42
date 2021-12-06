/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:45:25 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/27 10:27:54 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	j;

	j = 0;
	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (size <= d)
		return (s + size);
	while (src[j] && j < size - d - 1)
	{
		dst[d + j] = src[j];
		j++;
	}
	dst[d + j] = '\0';
	return (s + d);
}

/*int main()
{
    char src[] = "1337 !";
    char dest1[16] = "j'adore ";
    char dest2[16] = "j'adore ";
    printf("%zu\n", ft_strlcat(NULL, src, 0));
    printf("%lu\n", strlcat(NULL, src, 0));
    printf("%s\n", dest1);
    printf("%s\n", dest2);
}*/
