/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 14:15:16 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/02 14:27:01 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*c;
	char		*dest_str;

	if (dest == src)
		return (NULL);
	c = (char *) src;
	dest_str = (char *) dest;
	while (n-- > 0)
		*(dest_str++) = *c++;
	return (dest);
}
