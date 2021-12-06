/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:58:04 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/26 21:37:27 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!s || !fd)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}

/*int main()
{
	int fd=open("text4.txt",O_CREAT | O_WRONLY, 00700);
	printf("%d\n", fd);
	ft_putendl_fd("Hello 1337!",fd);
}*/