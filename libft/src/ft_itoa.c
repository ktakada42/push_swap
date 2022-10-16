/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 01:46:32 by ktakada           #+#    #+#             */
/*   Updated: 2022/05/25 22:21:17 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	count_digit(int n);

char	*ft_itoa(int n)
{
	size_t			digit_count;
	char			*ret;
	unsigned int	num;

	digit_count = count_digit(n);
	ret = (char *)malloc((digit_count + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	ret[digit_count--] = '\0';
	num = n;
	if (n == 0)
		ret[0] = '0';
	else if (n < 0)
	{
		num = n * -1;
		ret[0] = '-';
	}
	while (digit_count >= 0 && num != 0)
	{
		ret[digit_count--] = num % 10 + '0';
		num /= 10;
	}
	return (ret);
}

size_t	count_digit(int n)
{
	size_t		count;
	long int	num;

	count = 1;
	num = n;
	if (num < 0)
	{
		num *= -1;
		count++;
	}
	while (num >= 10)
	{
		num /= 10;
		count++;
	}
	return (count);
}
