/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 21:17:47 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 21:51:25 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATION_H
# define OPERATION_H

# include "doubly_linked_list.h"
# include "../libft/includes/libft.h"

void	swap(t_dll *list);
void	swap_a(t_dll *list_a);
void	swap_b(t_dll *list_b);
void	push_a(t_dll *list_a, t_dll *list_b);
void	push_b(t_dll *list_b, t_dll *list_a);
void	rotate_a(t_dll *list_a);
void	rotate_b(t_dll *list_b);
void	rr(t_dll *list_a, t_dll *list_b);
void	reverse_rotate_a(t_dll *list_a);
void	reverse_rotate_b(t_dll *list_b);
void	rrr(t_dll *list_a, t_dll *list_b);

#endif //OPERATION_H
