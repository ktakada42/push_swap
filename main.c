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
	t_dll	*list;
	t_dll	*next;

	if (argc == 1)
		return (0);
	list = parse_args(argv);
	if (list == NULL)
		exit_with_error();
	next = list->next;
	while (next != list)
	{
		printf("value: %d\n", next->value);
		next = next->next;
	}
}
