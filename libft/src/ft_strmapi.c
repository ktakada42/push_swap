/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:12:18 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:31:05 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	if (ft_strlen(s) > UINT_MAX)
		return (NULL);
	ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
