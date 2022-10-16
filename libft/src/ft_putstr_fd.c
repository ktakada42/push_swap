/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 23:45:00 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:26:35 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	put_len;

	if (s == NULL || ft_strlen(s) > INT_MAX)
		return ;
	put_len = ft_strlen(s);
	write(fd, s, put_len);
	return ;
}
