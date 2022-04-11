/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:58:11 by acoquele          #+#    #+#             */
/*   Updated: 2021/09/25 12:46:21 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	verif(int n)
{
	long long	a;

	a = (long long)n;
	a = n;
	if (n < 0)
		a = -a;
	if (a == 2147483648)
		a--;
	return (a);
}

static int	length_array(int n)
{
	long long	a[2];

	a[0] = 0;
	a[1] = (long long)n;
	if (a[1] < 0)
	{
		a[1] *= -1;
		a[0]++;
	}
	while (a[1] > 0)
	{
		a[0]++;
		a[1] = a[1] / 10;
	}
	if (n == 0)
		a[0]++;
	return (a[0]);
}

static int	value_d(int n)
{
	int	a;

	a = length_array(n) - 1;
	if (n < 0)
		a = length_array(n);
	return (a);
}

char	*ft_itoa(int n)
{
	size_t		a[4];
	char		*str;

	a[2] = 1;
	a[1] = length_array(n);
	a[3] = value_d(n);
	if (n < 0)
		a[3]--;
	str = malloc(sizeof(char) * length_array(n) + 1);
	if (!str)
		return (0);
	while (a[1] > 0)
	{
		a[0] = (verif(n) / a[2]) % 10;
		str[a[3]] = a[0] + '0';
		if (n < 0)
			str[0] = '-';
		a[2] *= 10;
		a[1]--;
		a[3]--;
	}
	str[length_array(n)] = '\0';
	if (n == -2147483648)
		str[length_array(n) - 1]++;
	return (str);
}
/*
int main() 
{
	ft_itoa(-21474836);

	return 0;
}
*/
/*
* a[4] 
* a = a[0]
* b = a[1]
* c = a[2]
* d = a[3]
*/