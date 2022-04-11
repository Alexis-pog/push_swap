/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 10:35:19 by acoquele          #+#    #+#             */
/*   Updated: 2021/07/15 14:34:59 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	char	*s1_chr;
	char	*s2_chr;
	size_t	i;

	i = 0;
	s1_chr = (char *)s1;
	s2_chr = (char *)s2;
	while (s1_chr[i] && s2_chr[i] && i < n - 1 && s1_chr[i] == s2_chr[i])
	{
		i++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1_chr[i] - (unsigned char)s2_chr[i]);
}
