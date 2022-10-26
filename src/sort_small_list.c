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

static void	sort_three_list(t_dll *list);

static void	sort_three_list_main(t_dll *list, int first, int second, int third);

static void	sort_four_list(t_dll *list);

static void	insert_top_elem_to_sorted_three_list(t_dll *list_a, t_dll *list_b);

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
	{
	}
	return ;
}

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

void	sort_four_list(t_dll *list)
{
	t_dll	*list_b;

	if (is_list_sorted(list))
		return ;
	list_b = new_doubly_linked_list();
	if (list_b == NULL)
		return ;
	push_b(list_b, list);
	sort_small_list(list);
	insert_top_elem_to_sorted_three_list(list, list_b);
	free(list_b);
}

void	insert_top_elem_to_sorted_three_list(t_dll *list_a, t_dll *list_b)
{
	int	b_top;
	int	a_top;
	int	a_second;
	int	a_third;

	push_a(list_a, list_b);
	b_top = list_a->next->value;
	a_top = list_a->next->next->value;
	a_second = list_a->next->next->next->value;
	a_third = list_a->next->next->next->next->value;
	if (b_top < a_top)
		return ;
	else if (b_top < a_second)
		swap_a(list_a);
	else if (b_top < a_third)
	{
		reverse_rotate_a(list_a);
		swap_a(list_a);
		rotate_a(list_a);
		rotate_a(list_a);
	}
	else
		rotate_a(list_a);
}
