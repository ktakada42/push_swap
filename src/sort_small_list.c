/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 20:34:40 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/22 20:34:40 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_small_list(t_dll *list)
{
	size_t	size;

	size = get_list_size(list);
	if (size == 0 || size == 1 || size > 5)
		return ;
	if (is_list_sorted(list))
		return ;
	if (size == 2)
		swap_a(list);
	else if (size == 3)
		sort_three_list(list);
	else if (size == 4)
		sort_four_list(list);
	else if (size == 5)
		sort_five_list(list);
	return ;
}
