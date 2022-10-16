/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:22:41 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:19:53 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*heap;

	if ((count != 0 && SIZE_MAX / count < size)
		|| (size != 0 && SIZE_MAX / size < count))
		return (NULL);
	heap = malloc(count * size);
	if (heap == NULL)
		return (NULL);
	ft_bzero(heap, count * size);
	return (heap);
}
