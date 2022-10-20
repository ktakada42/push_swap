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

void	swap(t_dll *list);
void	push_a(t_dll *list_a, t_dll *list_b);
void	push_b(t_dll *list_b, t_dll *list_a);
void	rotate(t_dll *list);
void	reverse_rotate(t_dll *list);

#endif //OPERATION_H
