/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list_operation.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:10:24 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 22:10:24 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doubly_linked_list.h"

bool	can_list_push_back(t_dll *list, int value)
{
	t_dll	*last;
	t_dll	*add;

	if (list == NULL)
		return (false);
	last = list->prev;
	add = (t_dll *)malloc(sizeof(t_dll) * 1);
	if (add == NULL)
		return (false);
	add->value = value;
	add->prev = last;
	add->next = list;
	list->prev = add;
	last->next = add;
	return (true);
}

bool	can_list_push_front(t_dll *list, int value)
{
	t_dll	*next;
	t_dll	*add;

	if (list == NULL)
		return (false);
	next = list->next;
	add = (t_dll *)malloc(sizeof(t_dll) * 1);
	if (add == NULL)
		return (false);
	add->value = value;
	add->prev = list;
	add->next = next;
	next->prev = add;
	list->next = add;
	return (true);
}

//#include <stdio.h>
//
//// test push back
//int main(void)
//{
//	t_dll	*list;
//	int 	i;
//	t_dll	*next;
//
//	list = new_doubly_linked_list();
//	if (list == NULL)
//	{
//		printf("create new list Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	i = 5;
//	if (!can_list_push_back(list, i))
//	{
//		list_clear(list);
//		printf("push back Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	i = 10;
//	if (!can_list_push_back(list, i))
//	{
//		list_clear(list);
//		printf("push back Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	printf("///check push back///\n");
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//	list_clear(list);
//}
//
//// test  push front
//int main(void)
//{
//	t_dll	*list;
//	int 	i;
//	t_dll	*next;
//
//	list = new_doubly_linked_list();
//	if (list == NULL)
//	{
//		printf("create new list Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	i = 5;
//	if (!can_list_push_front(list, i))
//	{
//		list_clear(list);
//		printf("push front Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	i = 10;
//	if (!can_list_push_front(list, i))
//	{
//		list_clear(list);
//		printf("push front Error\n");
//		exit(EXIT_FAILURE);
//	}
//
//	printf("///check push front///\n");
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//	list_clear(list);
//}
