/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:12:40 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 18:43:21 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	while (nb >= 1)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main(void)
{
	int	num;

	num = 5;
	printf("%d\n", ft_iterative_factorial(num));
	return (0);
}*/
