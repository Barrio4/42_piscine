/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:24:10 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/25 18:30:34 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	escribir(int n)
{
	int	der;
	int	izq;

	izq = (n / 10) + '0';
	der = (n % 10) + '0';
	write(1, &izq, 1);
	write(1, &der, 1);
}

void	ft_print_comb2(void)
{
	int		i;
	int		j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			escribir(i);
			write(1, " ", 1);
			escribir(j);
			if (!(i == 98 && j == 99))
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
