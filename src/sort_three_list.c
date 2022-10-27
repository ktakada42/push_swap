/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:39:06 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/27 14:39:06 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	sort_three_list_main(t_dll *list, int first, int second, int third);

void	sort_three_list(t_dll *list)
{
	int	first;
	int	second;
	int	third;

	if (is_list_sorted(list))
		return ;
	first = list->next->value;
	second = list->next->next->value;
	third = list->next->next->next->value;
	sort_three_list_main(list, first, second, third);
}

void	sort_three_list_main(t_dll *list, int first, int second, int third)
{
	if (first < second && second > third)
	{
		if (first > third)
			reverse_rotate_a(list);
		else
		{
			swap_a(list);
			rotate_a(list);
		}
	}
	else if (second < first && second < third)
	{
		if (third > first)
			swap_a(list);
		else
			rotate_a(list);
	}
	else
	{
		swap_a(list);
		reverse_rotate_a(list);
	}
}
