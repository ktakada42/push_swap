/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 22:27:40 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:29:58 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	ret;

	if (dstsize == 0)
		return (ft_strlen(src));
	i = 0;
	j = ft_strlen(dst);
	ret = ft_strlen(dst) + ft_strlen(src);
	if (dstsize < ft_strlen(dst) + 1)
		return (dstsize + ft_strlen(src));
	while (j + 1 < dstsize && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ret);
}
