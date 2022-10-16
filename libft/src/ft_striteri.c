/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:56:19 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:28:26 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	n;
	size_t			i;

	n = 0;
	i = 0;
	if (s == NULL || f == NULL)
		return ;
	if (ft_strlen(s) > UINT_MAX)
		return ;
	while (s[i] != '\0')
	{
		f(n, s + i);
		n++;
		i++;
	}
	return ;
}
