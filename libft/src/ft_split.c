/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:12:05 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:27:03 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_split_count(char const *s, char c);

static char		**allocate_count_and_free(char **str, size_t split_count);

char	**ft_split(char const *s, char c)
{
	char			**ret;
	size_t			i;
	size_t			j;
	unsigned int	start;

	if (s == NULL)
		return (NULL);
	ret = (char **)malloc((ft_split_count(s, c) + 1) * sizeof(char *));
	if (ret == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_split_count(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > start)
			ret[j++] = ft_substr(s, start, i - start);
	}
	ret[j] = NULL;
	return (allocate_count_and_free(ret, ft_split_count(s, c)));
}

size_t	ft_split_count(char const *s, char c)
{
	size_t	i;
	size_t	len;
	size_t	split_count;

	i = 0;
	len = 0;
	split_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
			len++;
		else
		{
			if (len > 0)
				split_count++;
			len = 0;
		}
		i++;
	}
	if (len > 0)
		split_count++;
	return (split_count);
}

char	**allocate_count_and_free(char **str, size_t split_count)
{
	size_t	i;
	size_t	j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (str[i] != NULL)
	{
		i++;
		count++;
	}
	if (count != split_count)
	{
		while (j < split_count + 1)
		{
			free(str[j]);
			j++;
		}
		free(str);
		return (NULL);
	}
	return (str);
}
