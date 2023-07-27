/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:04:38 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 18:49:30 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if ((nb == 0) && (power == 0))
		return (1);
	res = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power >= 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	int	num;

	printf("%d\n", ft_iterative_power(num));
	return (0);
}*/
