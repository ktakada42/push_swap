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

t_dll	*parse_args(char **args)
{
	size_t	i;
	t_dll	*list;
	int		*num;

	i = 1;
	list = new_doubly_linked_list();
	if (list == NULL)
		return (NULL);
	while (args[i] != NULL)
	{
		num = push_swap_atoi(args[i]);
		if (num == NULL)
		{
			list_clear(list);
			return (NULL);
		}
		if (!can_list_push_back(list, *num))
		{
			list_clear(list);
			return (NULL);
		}
		i++;
	}
	return (list);
}
