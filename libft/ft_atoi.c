/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student@.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:08:08 by acoquele          #+#    #+#             */
/*   Updated: 2022/05/03 16:07:50 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
static int	verif_int_max(const char *str, int n)
{
	char	*str2;
	int		k;

	k = 0;
	str2 = malloc(sizeof(char) * ft_strlen(str));
	if (!str2)
		return (0);
	if (str[n] == '-')
	{
		str2[k] = '-';
		n++;
		k++;
	}
	while ((str[n] >= '0' && str[n] <= '9'))
	{
		str2[k] = (char)str[n];
		n++;
		k++;
	}
	free(str2);
	if (ft_strlen(str2) >= 19 && str2[0] == '-' )
		return (2);
	if (ft_strlen(str2) >= 19)
		return (1);
	return (0);
}
*/
/*
	not the real atoi funct must comment this part to make atoi work*------------
*/

void	limits(const char *str)
{
	if (ft_strlen(str) > 12)
	{
		write (1, "2ERROR\n", 8);
		exit (1);
	}
		
}

void	ft_error(int i, t_node **node)
{
	list_free_all(node);
	write(1, "+ERROR\n", 8);
	exit(i);
}

void	set_val(t_libval *val)
{
	val->i = 0;
	val->j = 0;
	val->k = 1;
}
/*

must place this in the ft_atoi funct

if (verif_int_max(str, a[0]) == 2)
	return (0);
if (verif_int_max(str, a[0]) == 1)
	return (-1);
*/
/*
-------------------------------------------------------------------------------
*/

int	ft_atoi(const char *str, t_node **node)
{
	t_libval	val;

	set_val(&val);
	if (str[val.i] == '-')
	{
		if (str[val.i] == '-')
			val.k *= -1;
		if (ft_strncmp (str, "--", 2) == 0)
			ft_error (1,node);
		if (str[val.i + 1] < '0' || str[val.i + 1] > '9')
			ft_error (1,node);
		val.i++;
	}
	while (str[val.i] >= '0' && str[val.i] <= '9')
	{
		val.j = (val.j * 10) + (str[val.i] - '0');
		val.i++;
	}
	if ((str[val.i] <= '0' || str[val.i] >= '9' ) && str[val.i])
		ft_error (1,node);
	if (val.j > INT_MAX || (val.j * val.k) < INT_MIN)
		ft_error(1,node);
	return ((int)val.j * (int)val.k);
}

/*
int main(int argc, char *argv[1])
{
	printf("%d\n",atoi(argv[1]));
	printf("%d\n",ft_atoi(argv[1]));
	printf("%d\n",atoi(argv[1]));
	return (0);
}
*/