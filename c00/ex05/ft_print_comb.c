/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 11:55:53 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/07 14:48:36 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	imprimir(char v[3])
{
	write(1, &v[0], 1);
	write(1, &v[1], 1);
	write(1, &v[2], 1);
}

void	ft_print_comb(void)
{
	int		inicio;
	char	num[3];

	num[0] = '0';
	inicio = 0;
	while (num[0] <= '7')
	{
		num[1] = num[0] + 1;
		while (num[1] <= '8')
		{
			num[2] = num[1] + 1;
			while (num[2] <= '9')
			{
				if (inicio != 0)
				{
					write(1, ", ", 2);
				}
				inicio = 1;
				imprimir(num);
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}
