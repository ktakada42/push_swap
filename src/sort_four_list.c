/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_four_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:39:11 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/27 14:39:11 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	insert_one_elem_to_sorted_three_list(t_dll *list, t_dll *list_b);

void	sort_four_list(t_dll *list)
{
	t_dll	*list_b;
	int		top_nth_big;

	if (is_list_sorted(list))
		return ;
	top_nth_big = get_rank_in_size(list, 0);
	if (top_nth_big == 3)
		swap_a(list);
	list_b = new_doubly_linked_list();
	if (list_b == NULL)
		return ;
	push_b(list_b, list);
	sort_small_list(list);
	insert_one_elem_to_sorted_three_list(list, list_b);
	list_clear(list_b);
}

int	get_rank_in_size(t_dll *list, int place)
{
	int		i;
	t_dll	*next;

	i = 0;
	next = list->next;
	while (i < place)
	{
		next = next->next;
		i++;
	}
	return (next->value + 1);
}

void	insert_one_elem_to_sorted_three_list(t_dll *list, t_dll *list_b)
{
	int	b_top;
	int	a_top;
	int	a_second;

	b_top = list_b->next->value;
	a_top = list->next->value;
	a_second = list->next->next->value;
	push_a(list, list_b);
	if (b_top < a_top)
		return ;
	else if (b_top < a_second)
		swap_a(list);
	else
		rotate_a(list);
}
