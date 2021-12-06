/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 01:00:04 by aait-mas          #+#    #+#             */
/*   Updated: 2021/11/29 17:11:28 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	verif(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		f;
	int		l;
	int		i;

	i = 0;
	f = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	l = ft_strlen(s1);
	while (s1[f] && verif(s1[f], set))
		f++;
	while (l > f && verif(s1[l - 1], set))
		l--;
	new = (char *)malloc(sizeof(char) * ((l - f) + 1));
	if (new == NULL)
		return (NULL);
	while (f < l)
	{
		new[i++] = s1[f++];
	}
	new[i] = '\0';
	return (new);
}

/*int main()
{
	char s1 [] = "+++****haghj++++ag*****shagj+++khakl+++**";
	char set [] = "*+";
	printf("%s\n", ft_strtrim(s1,set));
}*/