/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 13:23:21 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/22 18:08:40 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	if (!size)
		return (ft_strlen(src));
	while (dest[a] && a < size)
		a++;
	while (src[b] && (a + b + 1) < size)
	{
		dest[a + b] = src[b];
		b++;
	}
	if (a < size)
		dest[a + b] = '\0';
	return (a + ft_strlen(src));
}
/*
int main()
{

	char src[] ="lorem ipsum dolor sit amet";
	char *dest = malloc(sizeof(*dest) * 15);
	unsigned int size = 5;
	memset(dest, 'r', 15);
	printf("%lu\n",strlcat(dest,src, size));
	write(1, dest, ft_strlen(dest));
	printf("%zu\n",ft_strlen(dest));
	printf("%lu\n",ft_strlcat(dest, src, size));
}
*/