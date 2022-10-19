/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 22:07:49 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 22:07:49 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/operation.h"

void	push_a(t_dll *list_a, t_dll *list_b)
{
	t_dll	*b_first;

	if (list_a == NULL || list_b == NULL)
		return ;
	b_first = list_b->next;
	if (b_first == list_b)
		return ;
	if (!can_list_push_front(list_a, b_first->value))
		return ;
	trim_first_node(list_b);
}

void	push_b(t_dll *list_b, t_dll *list_a)
{
	t_dll	*a_first;

	if (list_a == NULL || list_b == NULL)
		return ;
	a_first = list_a->next;
	if (a_first == list_a)
		return ;
	if (!can_list_push_front(list_b, a_first->value))
		return ;
	trim_first_node(list_a);
}

//#include <stdio.h>
//
//// push_a test
//int	main(void)
//{
//	t_dll	*list_a;
//	t_dll	*list_b;
//	t_dll	*next_a;
//	t_dll	*next_b;
//	int 	i = 1;
//
//	list_a = new_doubly_linked_list();
//	if (list_a == NULL)
//	{
//		perror("error at create list_a");
//		exit(EXIT_FAILURE);
//	}
//	list_b = new_doubly_linked_list();
//	if (list_b == NULL)
//	{
//		list_clear(list_a);
//		perror("error at create list_b");
//		exit(EXIT_FAILURE);
//	}
//	while (i < 3)
//	{
//		if (can_list_push_back(list_a, i) && can_list_push_back(list_b, i + 10))
//			i++;
//		else
//		{
//			list_clear(list_a);
//			list_clear(list_b);
//			perror("error at push back()");
//			exit(EXIT_FAILURE);
//		}
//	}
//	if (!can_list_push_back(list_b, i + 10))
//	{
//		list_clear(list_a);
//		list_clear(list_b);
//		perror("error at push back()");
//		exit(EXIT_FAILURE);
//	}
//	printf("///before push_a///\n");
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_a 1st///\n");
//	push_a(list_a, list_b);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_a 2nd///\n");
//	push_a(list_a, list_b);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_a 3rd///\n");
//	push_a(list_a, list_b);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_a 4th///\n");
//	push_a(list_a, list_b);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	list_clear(list_a);
//	list_clear(list_b);
//}
//
//// push_b test
//int	main(void)
//{
//	t_dll	*list_a;
//	t_dll	*list_b;
//	t_dll	*next_a;
//	t_dll	*next_b;
//	int 	i = 1;
//
//	list_a = new_doubly_linked_list();
//	if (list_a == NULL)
//	{
//		perror("error at create list_a");
//		exit(EXIT_FAILURE);
//	}
//	list_b = new_doubly_linked_list();
//	if (list_b == NULL)
//	{
//		list_clear(list_a);
//		perror("error at create list_b");
//		exit(EXIT_FAILURE);
//	}
//	while (i < 3)
//	{
//		if (can_list_push_back(list_a, i) && can_list_push_back(list_b, i + 10))
//			i++;
//		else
//		{
//			list_clear(list_a);
//			list_clear(list_b);
//			perror("error at push back()");
//			exit(EXIT_FAILURE);
//		}
//	}
//	if (!can_list_push_back(list_a, i))
//	{
//		list_clear(list_a);
//		list_clear(list_b);
//		perror("error at push back()");
//		exit(EXIT_FAILURE);
//	}
//	printf("///before push_b///\n");
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_b 1st///\n");
//	push_b(list_b, list_a);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_b 2nd///\n");
//	push_b(list_b, list_a);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_b 3rd///\n");
//	push_b(list_b, list_a);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	printf("\n///push_b 4th///\n");
//	push_b(list_b, list_a);
//	next_a = list_a->next;
//	while (next_a != list_a)
//	{
//		printf("a_value: %d\n", next_a->value);
//		next_a = next_a->next;
//	}
//	next_b = list_b->next;
//	while (next_b != list_b)
//	{
//		printf("b_value: %d\n", next_b->value);
//		next_b = next_b->next;
//	}
//	list_clear(list_a);
//	list_clear(list_b);
//}
