/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:54:54 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 20:54:55 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		*array;
	t_dll	*list;
	size_t	size;

	if (argc == 1)
		return (0);
	array = put_args_to_array(argc - 1, argv);
	if (array == NULL)
		exit_with_error();
	if (!is_args_unique(array, argc - 1))
	{
		free(array);
		exit_with_error();
	}
	free(array);
	list = parse_args(argv);
	if (list == NULL)
		exit_with_error();
	if (is_list_sorted(list))
	{
		list_clear(list);
		return (0);
	}
	else
	{
		size = get_list_size(list);
		if (size == 3)
			sort_small_list(list);
	}
	list_clear(list);
}
