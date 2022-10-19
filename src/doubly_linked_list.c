/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:54:25 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 10:54:25 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/doubly_linked_list.h"

t_dll	*new_doubly_linked_list(void)
{
	t_dll	*new_list;

	new_list = (t_dll *)malloc(sizeof(t_dll) * 1);
	if (new_list == NULL)
		return (NULL);
	new_list->value = 0;
	new_list->prev = new_list;
	new_list->next = new_list;
	return (new_list);
}

void	list_clear(t_dll *list)
{
	t_dll	*next;
	t_dll	*tmp;

	next = list->next;
	while (next != list)
	{
		tmp = next->next;
		free(next);
		next = tmp;
	}
	list->prev = list;
	list->next = list;
	free(list);
}

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

//#include <stdio.h>
//
//int main(void)
//{
//	t_dll	*list;
//	int 	i = 5;
//	t_dll	*next;
//
//	list = new_doubly_linked_list();
//	if (list == NULL)
//	{
//		printf("create new list Error\n");
//		exit(EXIT_FAILURE);
//	}
//	printf("///check create empty list///\n");
//	printf("current: %p\n", list);
//	printf("prev: %p\n", list->prev);
//	printf("next: %p\n", list->next);
//
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
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//	list_clear(list);
//}
