/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:44:28 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/26 20:44:28 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	check_first_two_elems_third_or_fourth_biggest(t_dll *list);

void	sort_five_list(t_dll *list_a, t_dll *list_b)
{
	int		i;
	int		a_top;
	int		a_last;
	int		b_top;

	if (is_list_sorted(list_a))
		return ;
	check_first_two_elems_third_or_fourth_biggest(list_a);
	push_b(list_b, list_a);
	push_b(list_b, list_a);
	sort_three_list(list_a);
	i = 0;
	while (i < 2)
	{
		a_top = list_a->next->value;
		a_last = list_a->prev->value;
		b_top = list_b->next->value;
		push_a(list_a, list_b);
		if (b_top > a_last)
			rotate_a(list_a);
		else if (b_top > a_top)
			swap_a(list_a);
		i++;
	}
}

void	check_first_two_elems_third_or_fourth_biggest(t_dll *list)
{
	int	top_nth_big;
	int	second_nth_big;

	top_nth_big = get_rank_in_size(list, 0);
	second_nth_big = get_rank_in_size(list, 1);
	if (top_nth_big == 3 || top_nth_big == 4)
	{
		rotate_a(list);
		check_first_two_elems_third_or_fourth_biggest(list);
	}
	else if (second_nth_big == 3 || second_nth_big == 4)
	{
		swap_a(list);
		rotate_a(list);
		check_first_two_elems_third_or_fourth_biggest(list);
	}
	else
		return ;
}
