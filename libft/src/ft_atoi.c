/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 17:23:29 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:16:32 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int	ft_isspace(int c);

int	ft_atoi(const char *str)
{
	long long	abs;
	size_t		i;
	int			sign;

	abs = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (ft_isdigit(str[i]))
		abs = (abs * 10) + (str[i++] - '0');
	return ((int)abs * sign);
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}
