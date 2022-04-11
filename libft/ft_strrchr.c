/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:50 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/22 17:47:31 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	c %= 256;
	str = (char *)s;
	while (str[i])
		i++;
	while (str[i] != c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return (&str[i]);
}

/*
int main()
{
	char *src = "the cake is a lie !\0I'm hidden lol\r\n";
	char *d1 = strrchr(src, ' ');
	char *d2 = ft_strrchr(src, ' ');
	printf ("%s \n %s \n",d1,d2);
}
*/
