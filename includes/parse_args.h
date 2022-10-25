/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:18:43 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 21:18:45 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSE_ARGS_H
# define PARSE_ARGS_H

# include <stddef.h>
# include "../includes/doubly_linked_list.h"
# include "../includes/push_swap_atoi.h"

t_dll	*parse_args(int len, char **args);
bool	is_list_sorted(t_dll *list);

#endif //PARSE_ARGS_H
