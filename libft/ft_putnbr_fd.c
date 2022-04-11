/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 19:09:08 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/25 16:14:21 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	a;

	a = 0;
	if (nb == -2147483648)
		write(fd, "-2147483648", 11);
	else if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		a = -nb;
	}
	else
		a = nb;
	if (a > 9 && nb != -2147483648)
	{
		ft_putnbr_fd(a / 10, fd);
		a %= 10;
	}
	if (nb != -2147483648)
		ft_putchar_fd(a + '0', fd);
}
