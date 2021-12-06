/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:43:35 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/28 00:15:18 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*posdest;
	const char		*possrc;
	size_t			i;

	i = 0;
	posdest = dst;
	possrc = src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		posdest[i] = possrc[i];
		i++;
	}
	return (dst);
}

/*int main()  
{
	char str [] = "abcde";
	ft_memcpy(str + 2, str, 3);
	printf("%s\n", str);
}*/

// Une erreur de segmentation (en anglais 
//segmentation fault, en abrégé segfault) 
//est un plantage d'une application qui a 
//tenté d'accéder à un emplacement mémoire 
//qui ne lui était pas alloué.
