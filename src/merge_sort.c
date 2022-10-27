/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:06:37 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/21 12:06:37 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/merge_sort.h"

static void	merge_sort_main(int *array, int *tmp, int left, int right);

void	merge_sort(int *array, int left, int right)
{
	int	mid;
	int	*tmp;

	if (left >= right)
		return ;
	mid = (left + right) / 2;
	merge_sort(array, left, mid);
	merge_sort(array, mid + 1, right);
	tmp = (int *)malloc(sizeof(int) * (right - left + 1));
	if (tmp == NULL)
		return ;
	merge_sort_main(array, tmp, left, right);
	free(tmp);
}

void	merge_sort_main(int *array, int *tmp, int left, int right)
{
	int	mid;
	int	i;
	int	j;
	int	k;

	mid = (left + right) / 2;
	i = left;
	j = left;
	while (i <= mid)
		tmp[i++] = array[j++];
	i = mid + 1;
	j = right;
	while (i <= right)
		tmp[i++] = array[j--];
	i = left;
	j = right;
	k = left;
	while (k <= right)
	{
		if (tmp[i] <= tmp[j])
			array[k++] = tmp[i++];
		else
			array[k++] = tmp[j--];
	}
}

//#include <stdio.h>
//#include <time.h>
//
//// test merge_sort()
//int main(void)
//{
//	int size = 6;
//	int array[size];
//	size_t i = 0;
//
//	srand((unsigned int) time(NULL));
//	while (i < size)
//	{
//		array[i] = rand() % 999;
//		i++;
//	}
//	i = 0;
//	printf("///before_sort///\n");
//	while (i < size)
//	{
//		printf("array[%zu]: %d\n", i, array[i]);
//		i++;
//	}
//	merge_sort(array, 0, size - 1);
//	printf("\n///after_sort///\n");
//	i = 0;
//	while (i < size)
//	{
//		printf("array[%zu]: %d\n", i, array[i]);
//		i++;
//	}
//}
