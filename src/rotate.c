/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:38:13 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/20 18:38:38 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	rotate(t_dll *list)
{
	t_dll	*last;

	if (list == NULL)
		return ;
	last = list->prev;
	while (list != last)
	{
		swap(list);
		list = list->next;
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
//	list = new_doubly_linked_list();
//	if (list == NULL)
//		free_list_and_exit(list);
//	swap(list);
//	while (i <= 5)
//	{
//		if (can_list_push_back(list, i))
//			i++;
//		else
//			free_list_and_exit(list);
//	}
//
//	rotate(list);
//	next = list->next;
//	while (next != list)
//	{
//		printf("value: %d\n", next->value);
//		next = next->next;
//	}
//	list_clear(list);
//}
