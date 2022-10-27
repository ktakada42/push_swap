/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coordinate_compression.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:51:19 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/27 13:51:20 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/coordinate_compression.h"

int	*coordinate_compression(int *original, int *sorted_copy, int len)
{
	int	i;
	int	j;
	int	target;
	int	target_index;

	i = 0;
	while (i < len)
	{
		target = original[i];
		j = 0;
		while (j < len)
		{
			if (target == sorted_copy[j])
			{
				target_index = j;
				break ;
			}
			j++;
		}
		original[i] = target_index;
		i++;
	}
	return (original);
}
