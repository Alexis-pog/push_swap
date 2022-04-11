/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:30 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/25 13:57:21 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*main_str;
	int		i;
	int		i2;

	if (!s1)
		return (NULL);
	i = 0;
	i2 = 0;
	main_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!main_str)
		return (NULL);
	while (s1[i])
	{
		main_str[i] = s1[i];
		i++;
	}
	while (s2[i2])
	{
		main_str[i] = s2[i2];
		i++;
		i2++;
	}
	main_str[i] = '\0';
	return (main_str);
}
/*
int main()
{
	char s1[] = "hello";
	char s2[] = "you";
}
*/