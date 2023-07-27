/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 19:25:25 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/24 13:39:31 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	power(int base, int exp)
{
	int	res;

	res = 1;
	while (exp != 0)
	{
		res *= base;
		exp--;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	ones;
	int	result;

	ones = 1;
	i = 0;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			ones *= -1;
		i++;
	}
	while (str[i] <= 57 && str[i] >= 48)
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * ones);
}
/*
int	main(void)
{
	char	arr[] = " ---+--+1234ab567";

	printf("%d\n", ft_atoi(arr));
	return (0);
}*/
