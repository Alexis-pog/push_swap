/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:46 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/20 19:08:47 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** The ft_memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s. Returns a pointer to the byte located, or NULL
** if no such byte exists within n bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;
	unsigned char	character;

	i = 0;
	str = (unsigned char *)s;
	character = (unsigned char) c;
	while (i < n)
	{
		if (*str == character)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = memchr(str, ch, 10);

   printf("String after |%c| is - |%s|\n", ch, ret);
   printf("%s\n", ft_memchr(str,ch,10));

   return(0);
}
*/