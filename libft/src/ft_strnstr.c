/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:15:40 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:31:49 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	int		diff;

	needle_len = ft_strlen(needle);
	i = 0;
	if (needle_len == 0)
		return ((char *)haystack);
	if (len == 0 || ft_strlen(haystack) < needle_len)
		return (NULL);
	while (i + needle_len <= len)
	{
		diff = ft_strncmp(haystack + i, needle, needle_len);
		if (diff == 0)
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
