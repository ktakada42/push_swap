/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:15:09 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:27:31 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	chr;
	size_t	i;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	if (chr == '\0')
		return (str + i);
	return (NULL);
}
