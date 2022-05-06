/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: workplace <workplace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:58 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/06 12:36:48 by workplace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	count;

	if (!s || *s == '\0')
		return (NULL);
	count = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	sub_str = malloc(sizeof(char) * (len + 1));
	if (!sub_str)
		return (NULL);
	while (len > 0)
	{
		sub_str[count] = s[start];
		start++;
		count++;
		if (len == 0)
			break ;
		len--;
	}
	sub_str[count] = '\0';
	return (sub_str);
}
/* 
* s string which you create the substring
* start where the substring start
* en is the length of the substring
*/
/*
int main()
{
	char s[] = "";
	int  start = 5;
	size_t  len = 3;
	printf("%s\n", ft_substr(s, start ,len));
}
*/