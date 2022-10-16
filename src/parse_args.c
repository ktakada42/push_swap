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

bool	is_args_valid(char **args)
{
	size_t	i;
	int		*num;

	i = 1;
	while (args[i] != NULL)
	{
		num = push_swap_atoi(args[i]);
		if (num == NULL)
			return (false);
		i++;
	}
	return (true);
}
