/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 13:38:10 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:27:56 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char	*s1)
{
	size_t	i;
	char	*heap;

	i = 0;
	heap = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (heap == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		heap[i] = s1[i];
		i++;
	}
	heap[i] = '\0';
	return (heap);
}
