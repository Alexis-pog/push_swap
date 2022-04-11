/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:54 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/25 14:07:00 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	size;

	if (!s1)
		return (NULL);
	start = 0;
	size = ft_strlen(s1) - 1 ;
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	while (ft_strchr(set, s1[size]) && size > 0)
		size--;
	return (ft_substr(s1, start, size - start + 1));
}
/*
* s1 = "lllllllalelclllll" set = 'la' 
* trimmed = "elc"
*/ 