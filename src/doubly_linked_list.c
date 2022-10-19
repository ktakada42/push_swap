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

t_dll	*free_list_and_exit(t_dll *list)
{
	list_clear(list);
	return (NULL);
}

//#include <stdio.h>
//
//// test create empty list and free
//int main(void)
//{
//	t_dll	*list;
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
//	list_clear(list);
//}
