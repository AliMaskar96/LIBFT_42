/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:43:53 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/28 00:08:47 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	int				i;
	unsigned char	*p;

	i = 0;
	p = ((unsigned char *)b);
	while (n--)
		p[i++] = c;
	return (b);
}

/*int main()
{
	char s[] = "++++++++";
	printf("%s\n", ft_memset(s,'*',5));
}*/
