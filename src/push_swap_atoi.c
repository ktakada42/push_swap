/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktakada <ktakada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:58:42 by ktakada           #+#    #+#             */
/*   Updated: 2022/10/16 21:58:43 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_atoi.h"

static int	ft_isspace(int c);

static bool	is_overflow(unsigned int abs, int want_add, bool is_neg);

static int	*uint_to_int(unsigned int n, bool is_neg);

int	*push_swap_atoi(char *arg)
{
	unsigned int	abs;
	bool			is_neg;

	abs = 0;
	is_neg = false;
	while (ft_isspace(*arg))
		arg++;
	if (*arg == '-')
		is_neg = true;
	if (*arg == '-' || *arg == '+')
		arg++;
	while (*arg != '\0')
	{
		if (ft_isdigit(*arg))
		{
			if (is_overflow(abs, *arg - '0', is_neg))
				return (NULL);
			abs = (abs * 10) + *arg - '0';
		}
		else
			return (NULL);
		arg++;
	}
	return (uint_to_int(abs, is_neg));
}

int	ft_isspace(int c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

bool	is_overflow(unsigned int abs, int want_add, bool is_neg)
{
	unsigned int	cutoff;

	cutoff = INT_MAX / 10 + 1;
	if (abs >= cutoff)
		return (true);
	else if (abs == cutoff - 1)
	{
		if (is_neg)
		{
			if (want_add == 9)
				return (true);
		}
		else
		{
			if (want_add == 8 || want_add == 9)
				return (true);
		}
	}
	return (false);
}

int	*uint_to_int(unsigned int n, bool is_neg)
{
	int	num;
	int	*ret;

	num = n;
	if (is_neg)
		num = n * -1;
	ret = &num;
	return (ret);
}

//#include <stdio.h>
//
//int main(int argc, char **argv){
//	int *num;
//
//	if (argc != 2)
//		exit(1);
//	num = push_swap_atoi(argv[1]);
//	if (num == NULL)
//	{
//		printf("Error\n");
//		exit(1);
//	}
//	printf("%d\n", *num);
//}
