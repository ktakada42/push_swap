/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:34:09 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 20:34:57 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../includes/operation.h"
# include "../includes/parse_args.h"
# include "../includes/utils.h"

int		get_rank_in_size(t_dll *list, int place);
void	sort_three_list(t_dll *list);
void	sort_four_list(t_dll *list);
void	sort_five_list(t_dll *list);
void	sort_small_list(t_dll *list);

#endif //PUSH_SWAP_H
