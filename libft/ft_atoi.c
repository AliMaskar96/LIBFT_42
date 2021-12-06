/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 00:42:00 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/25 06:14:46 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{	
	int					i;
	unsigned long long	res;
	int					moins;

	i = 0;
	res = 0;
	moins = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			moins = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		if (res > 9223372036854775807 && moins == 1)
			return (-1);
		if (res > 9223372036854775808U && moins == -1)
			return (0);
		res = (res * 10) + (str[i] - '0');
		i++;
	}		
	return (res * moins);
}

/*int main()
{
	char str [] = "-212";
	printf("%d\n", ft_atoi(str));

	printf("%d\n", atoi(str));
}*/