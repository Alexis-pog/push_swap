/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:08:02 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/29 17:36:43 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*base;

	base = malloc(sizeof(char) * (size * count));
	if (!base)
		return (NULL);
	ft_memset(base, 0, size * count);
	return (base);
}
