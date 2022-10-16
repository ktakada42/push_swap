/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:11:57 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:32:35 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_start_trim_count(char *s1, char const *set);

static size_t	ft_end_trim_count(char *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;

	ret = (char *)s1;
	if (ret == NULL)
		return (NULL);
	if (set == NULL)
		return (ret);
	start = ft_start_trim_count(ret, set);
	if (start == ft_strlen(ret))
		return (ft_strdup(""));
	end = ft_end_trim_count(ret, set);
	ret = ft_substr(ret, start, ft_strlen(ret) - start - end);
	return (ret);
}

size_t	ft_start_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (ft_strchr(set, s1[i]) != NULL && s1[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

size_t	ft_end_trim_count(char *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(s1) - 1;
	count = 0;
	while (ft_strchr(set, s1[i]) != NULL)
	{
		count++;
		if (i == 0)
			break ;
		i--;
	}
	return (count);
}
