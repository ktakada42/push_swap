/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:42:48 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/20 19:15:51 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	reverse_rotate(t_dll *list)
{
	size_t	list_size;
	t_dll	*end;
	t_dll	*start;

	list_size = get_list_count(list);
	if (list_size == 0 || list_size == 1 || list_size == 2)
		return ;
	if (list_size == 3)
	{
		swap(list);
		return ;
	}
	end = list->prev->prev;
	start = list->prev->prev->prev;
	while (start != end)
	{
		swap(start);
		start = start->prev;
	}
}

//#include <stdio.h>
//
//int	main(void)
//{
//	t_dll	*list;
//	t_dll	*next;
//	int 	i = 1;
//
//	// list_size = 1
//	printf("///list_size = 1///\n");
//	list = new_doubly_linked_list();
//	if (list == NULL)
//		free_list_and_exit(list);
//	reverse_rotate(list);
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//
//	// list_size = 2
//	printf("\n///list_size = 2///\n");
//	if (can_list_push_back(list, 1))
//	{
//		reverse_rotate(list);
//		next = list->next;
//		while (next != list)
//		{
//			printf("value: %d\n", next->value);
//			next = next->next;
//		}
//	}
//	else
//		free_list_and_exit(list);
//
//	// list_size = 3
//	printf("\n///list_size = 3///\n");
//	if (can_list_push_back(list, 2))
//	{
//		reverse_rotate(list);
//		next = list->next;
//		while (next != list)
//		{
//			printf("value: %d\n", next->value);
//			next = next->next;
//		}
//	}
//	else
//		free_list_and_exit(list);
//	list_clear(list);
//
//	// list_size = 6
//	printf("\n///list_size = 6///\n");
//	list = new_doubly_linked_list();
//	if (list == NULL)
//		free_list_and_exit(list);
//	while (i <= 5)
//	{
//		if (can_list_push_back(list, i))
//			i++;
//		else
//			free_list_and_exit(list);
//	}
//	reverse_rotate(list);
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//	list_clear(list);
//}