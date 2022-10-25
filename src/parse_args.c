/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:50:50 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 20:50:52 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/parse_args.h"

static int		*put_args_to_array(int len, char **args);
static bool		is_args_unique(int *array, int len);
static t_dll	*free_array(int *array);

t_dll	*parse_args(int len, char **args)
{
	int		*array;
	int		i;
	t_dll	*list;

	array = put_args_to_array(len, args);
	if (array == NULL)
		return (NULL);
	if (!is_args_unique(array, len))
		return (free_array(array));
	i = 0;
	list = new_doubly_linked_list();
	if (list == NULL)
		return (free_array(array));
	while (i < len)
	{
		if (!can_list_push_back(list, array[i]))
			free_list_and_exit(list);
		i++;
	}
	free(array);
	return (list);
}

int	*put_args_to_array(int len, char **args)
{
	int		*array;
	size_t	i;
	size_t	j;
	int		*num;

	array = (int *)malloc(sizeof(int) * len);
	if (array == NULL)
		return (NULL);
	i = 1;
	j = 0;
	while (args[i] != NULL)
	{
		num = push_swap_atoi(args[i]);
		if (num == NULL)
		{
			free(array);
			return (NULL);
		}
		array[j] = *num;
		i++;
		j++;
	}
	return (array);
}

bool	is_args_unique(int *array, int len)
{
	int	i;
	int	current;

	i = 1;
	current = array[0];
	while (i < len)
	{
		if (array[i] == current)
			return (false);
		current = array[i];
		i++;
	}
	return (true);
}

t_dll	*free_array(int *array)
{
	free(array);
	return (NULL);
}

bool	is_list_sorted(t_dll *list)
{
	t_dll	*next;
	t_dll	*last;
	int		current;

	next = list->next;
	current = next->value;
	last = list->prev;
	while (next != last)
	{
		next = next->next;
		if (current > next->value)
			return (false);
		current = next->value;
	}
	return (true);
}

//#include <stdio.h>
//
//// test is_args_unique()
//int main(int argc, char **argv)
//{
//	int *array;
//
//	if (argc == 1)
//		return (0);
//	array = put_args_to_array(argc - 1, argv);
//	if (array == NULL)
//		exit(EXIT_FAILURE);
//	if (is_args_unique(array, argc - 1))
//		printf("unique\n");
//	else
//		printf("not unique\n");
//}
//// test put_args_to_array()
//int main(int argc, char **argv)
//{
//	int 	*array;
//	size_t	i = 0;
//
//	if (argc != 0)
//	{
//		array = put_args_to_array(argc - 1, argv);
//		if (array == NULL)
//		{
//			printf("error at put_args_to_array\n");
//			free(array);
//			exit(EXIT_FAILURE);
//		}
//		while (i < argc - 1)
//		{
//			printf("array[%zu]: %d\n", i, array[i]);
//			i++;
//		}
//		free(array);
//	}
//}
//
//// test is_list_sorted()
//int main(void)
//{
//	t_dll	*list;
//	int 	i = 1;
//
//	list = new_doubly_linked_list();
//	if (list == NULL)
//	{
//		printf("error at new_doubly_linked_list()");
//		exit(EXIT_FAILURE);
//	}
//	while (i < 4)
//	{
//		if (!can_list_push_back(list, i))
//		{
//			free(list);
//			printf("error at can_list_push_back()");
//			exit(EXIT_FAILURE);
//		}
//		i++;
//	}
//	if (is_list_sorted(list))
//		printf("sorted\n");
//	else
//		printf("not sorted\n");
//	list_clear(list);
//}
