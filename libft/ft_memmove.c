/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:33 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/20 19:08:35 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst_str;
	char		*src_str;	
	size_t		count;

	if (src == dst)
		return (dst);
	count = -1;
	dst_str = (char *)dst;
	src_str = (char *)src;
	if (src < dst)
	{
		while (len--)
			*(dst_str + len) = *(src_str + len);
		return (dst);
	}
	while (len--)
		*dst_str++ = *src_str++;
	return (dst);
}

/*
int main () 
{
	char *dest;
	const char src[]  = "thiÃ Ã\xde\xad\xbe\xeftriÃ±g will be Ã¸vÃ©rlapÃ©d !\r\n";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	printf("After memmove dest = %s, src = %s\n", dest, src);
	printf("%s\n", memmove(dest,src, 59));
	printf("%s\n", ft_memmove(dest, src, 59));

	return(0);
}
*/
/*
* this is the fonction memmove, it is use to copy a string
* n byte of a string source, into a destination 
*/