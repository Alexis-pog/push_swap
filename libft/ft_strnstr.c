/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:45 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/21 14:40:49 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	l_chk;
	char	*hay;

	count = 0;
	hay = (char *)haystack;
	if (!*needle || needle == NULL || haystack == needle)
		return ((char *)haystack);
	while (hay[count] && count < len)
	{
		l_chk = 0;
		while (hay[count + l_chk] && needle[l_chk]
			&& hay[count + l_chk] == needle[l_chk] && count + l_chk < len)
			l_chk++;
		if (l_chk == ft_strlen(needle))
			return (hay + count);
		count++;
	}
	return (NULL);
}
/*
int main()
{
	char *s1 = "MZIRIBMZIRIBMZE123";
	char *s2 = "MZIRIBMZE";
	size_t max = ft_strlen(s2);

	printf("%s",strnstr(s1,s2,max));
	printf("\n");
	printf("%s",ft_strnstr(s1,s2,max));
}
*/