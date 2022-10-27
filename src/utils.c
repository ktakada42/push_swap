/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:13:32 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 21:13:32 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	exit_with_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

int	*copy_int_array(int *array, int len)
{
	int	*copy;
	int	i;

	copy = (int *)malloc(sizeof(int) * len);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		copy[i] = array[i];
		i++;
	}
	return (copy);
}
