/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubly_linked_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 10:47:37 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/19 10:47:37 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLY_LINKED_LIST_H
# define DOUBLY_LINKED_LIST_H

# include <stdbool.h>
# include <stdlib.h>

typedef struct _doubly_linked_list
{
	int							value;
	struct _doubly_linked_list	*prev;
	struct _doubly_linked_list	*next;
}	t_dll;

t_dll	*new_doubly_linked_list(void);
void	list_clear(t_dll *list);
t_dll	*free_list_and_exit(t_dll *list);
bool	can_list_push_back(t_dll *list, int value);

#endif //DOUBLY_LINKED_LIST_H
