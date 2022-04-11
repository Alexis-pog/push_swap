/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoquele <acoquele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:09:29 by acoquele          #+#    #+#             */
/*   Updated: 2021/10/04 16:12:59 by acoquele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const *s, char c)
{
	size_t	count;
	size_t	index;

	index = 0;
	count = 0;
	while (s[index] == c && s[index])
		index++;
	while (s[index])
	{
		if (s[index] == c)
			count++;
		while (s[index] == c && s[index])
			index++;
		if (s[index] != c && s[index])
			index++;
	}
	if (!s[0])
		count = 0;
	else if (s[index - 1] != c)
		count++;
	return (count);
}

static char	**free_malloc(char **tab, int count)
{	
	while (tab[--count])
		free(tab[count]);
	free (tab);
	return (NULL);
}

char	**make_a_word(char *s, char c, char **tab, size_t count)
{
	size_t	str_index;
	size_t	word_index;
	size_t	y_index;

	str_index = 0;
	word_index = 0;
	y_index = 0;
	while (y_index < count)
	{
		while (s[str_index] == c)
			str_index++;
		word_index = str_index;
		while (s[word_index + 1] != c && s[word_index + 1])
			word_index++;
		tab[y_index] = ft_substr(s, str_index, word_index - str_index + 1);
		if (!tab[y_index])
			return (free_malloc(tab, y_index));
		str_index = word_index + 1;
		y_index++;
	}
	tab[y_index] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	char	**tab2;
	char	*new_s;
	size_t	count;

	new_s = (char *)s;
	if (!new_s)
		return (NULL);
	count = count_word(s, c);
	tab = malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	tab2 = make_a_word(new_s, c, tab, count);
	return (tab2);
}
/*
int main()
{
	char a[] = "\0";
	char **tab = ft_split(a,'z');
	int j = 0;
	while (tab[j])
		printf("%s",tab[j++]);
	printf("%s", tab[0]);
	if (!tab[0])
		printf("good-job");
}
*/