/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:04:59 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/21 12:04:59 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MERGE_SORT_H
# define MERGE_SORT_H

# include <stdlib.h>

void	merge_sort(int *array, int left, int right);
int		*create_empty_array(size_t len);
int		get_min_elem(int *array, size_t len);
int		get_max_elem(int *array, size_t len);

#endif //MERGE_SORT_H
