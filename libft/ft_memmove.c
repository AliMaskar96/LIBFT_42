/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:43:41 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/28 00:19:12 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// memmove peut gérer la mémoire qui se chevauche (MEMORY OVERLAP), memcpy non.

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		i = len - 1;
		while (i >= 0)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		dst = ft_memcpy(dst, src, len);
	}
	return (dst);
}

/*int main()  
{
	char str [] = "abcde";
	ft_memmove(str +2, str, 3); 
	printf("%s\n", str);
}*/
