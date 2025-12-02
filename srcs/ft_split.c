/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: analaphi <analaphi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 17:46:10 by analaphi          #+#    #+#             */
/*   Updated: 2025/12/02 12:16:59 by analaphi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <stdio.h>


static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if ((str[i] != c) && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static char	*word_dup(const char *str, int start, int finish)
{
	int		i;
	char	*word;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char *));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *str, char c)
{
	int		i;
	int		j;
	int		index;
	char	**split;

	if (!str || !c)
		printf("caca ici");
	split = malloc(sizeof(char *) * (ft_count_words(str, c) + 1));
	if (!str || !split)
		return (NULL);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(str))
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) || index >= 0)
		{
			split[j++] = word_dup(str, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
