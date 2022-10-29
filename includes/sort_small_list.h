/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_list.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:15:37 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/29 15:15:38 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_SMALL_LIST_H
# define SORT_SMALL_LIST_H

# include "../includes/doubly_linked_list.h"
# include "../includes/operation.h"
# include "../includes/parse_args.h"

int		get_rank_in_size(t_dll *list, int place);
void	sort_three_list(t_dll *list);
void	sort_four_list(t_dll *list_a, t_dll *list_b);
void	sort_five_list(t_dll *list_a, t_dll *list_b);
void	sort_small_list(t_dll *list);

#endif //SORT_SMALL_LIST_H
