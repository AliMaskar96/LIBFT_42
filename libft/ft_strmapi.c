/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 00:59:34 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/30 06:34:51 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	int		i;
	int		count;

	if (!s || !f)
		return (ft_strdup("0"));
	i = 0;
	count = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * count + 1);
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		new[i] = f(i,*s++);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*char f(unsigned int a,char s)
	{
			s+=1;

		return s;	
	}

int main()
{
	char s[] = "abcdefgh";
	char *new;
	new = ft_strmapi(s,f);
	
	printf(" = %s = \n",new);

}*/