/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:59:03 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:32:14 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	chr;
	size_t	i;

	str = (char *)s;
	chr = (char)c;
	i = ft_strlen(str);
	while (i > 0 && str[i] != chr)
		i--;
	if (str[i] == chr)
		return (str + i);
	return (NULL);
}
