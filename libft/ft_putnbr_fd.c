/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:58:10 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/26 23:02:04 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int i, int fd)
{
	long	j;

	j = (long) i;
	if (j < 0)
	{
		ft_putchar_fd('-', fd);
		j *= -1;
	}
	if (j >= 10)
		ft_putnbr_fd(j / 10, fd);
	ft_putchar_fd((j % 10 + 48), fd);
}

/*int main()
{
	int fd= open("text5.txt", O_CREAT | O_WRONLY, 0644);
	printf("%d", fd);
	ft_putnbr_fd(-2147483648,fd);
}*/
