/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 00:39:04 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/26 21:08:16 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t		i;

	if (!s || !fd)
		return ;
	i = ft_strlen(s);
	write(fd, s, i);
}

/*int main()
{
	int fd=open("text1.txt",O_CREAT | O_WRONLY, 00700);
	int fd2=open("text2.txt",O_CREAT | O_WRONLY, 00700);
	printf("%d\n", fd);
	printf("%d\n", fd2);
	ft_putstr_fd("Hello 1337!",fd);
}*/
