/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:15:10 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 21:15:10 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	swap(t_dll *list)
{
	t_dll	*first;
	t_dll	*second;

	if (list == NULL)
		return ;
	first = list->next;
	if (first->next == list)
		return ;
	second = first->next;
	first->next = second->next;
	second->next->prev = first;
	second->next = first;
	first->prev = second;
	list->next = second;
	second->prev = list;
}

void	swap_a(t_dll *list_a)
{
	swap(list_a);
	ft_putendl_fd("sa", 1);
}

void	swap_b(t_dll *list_b)
{
	swap(list_b);
	ft_putendl_fd("sb", 1);
}

//#include <stdio.h>
//
//int	main(void)
//{
//	t_dll	*list;
//	t_dll	*next;
//	int 	i = 1;
//
//	list = new_doubly_linked_list();
//	if (list == NULL)
//		free_list_and_exit(list);
//	swap(list);
//	while (i < 3)
//	{
//		if (can_list_push_back(list, i))
//			i++;
//		else
//			free_list_and_exit(list);
//		if (i == 1)
//			swap(list);
//	}
//	next = list->next;
//	while (next != list)
//	{
//		printf("%d\n", next->value);
//		next = next->next;
//	}
//	printf("///swap///\n");
//	swap(list);
//	next = list->next;
//	while (next != list)
//	{
//		printf("%d\n", next->value);
//		next = next->next;
//	}
//}
