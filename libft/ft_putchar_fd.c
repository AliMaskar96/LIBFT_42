/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:57:57 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/28 02:15:31 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main()
{
	int fd=open("text3.txt" ,O_CREAT | O_WRONLY, 00007);
	printf("%d\n", fd);;
	ft_putchar_fd('/',fd);

}*/