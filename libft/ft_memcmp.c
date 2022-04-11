/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:41 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/22 14:40:51 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* The memcmp() function compares byte string s1 against byte string s2.
* Both strings are assumed to be n bytes long
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*str_1;
	char	*str_2;
	size_t	i;

	if (n == 0)
		return (0);
	str_1 = (char *)s1;
	str_2 = (char *)s2;
	i = 0;
	while (i < n - 1 && str_1[i] == str_2[i])
		i++;
	return ((unsigned char)str_1[i] - (unsigned char)str_2[i]);
}
/*
int main()
{
	char *s1 = "zyxbcdefgh";
	char *s2 = "abcdefgxyz";
	printf("%d\n", ft_memcmp(s1, s2, 11));
	printf("%d\n", memcmp(s1, s2, 11));
}
*/