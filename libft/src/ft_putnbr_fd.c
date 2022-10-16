/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 00:44:44 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:26:06 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	tmp;
	char		c;

	tmp = n;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		ft_putchar_fd('-', fd);
	}
	if (tmp <= 9)
	{
		c = tmp + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(tmp / 10, fd);
		ft_putnbr_fd(tmp % 10, fd);
	}
	return ;
}
