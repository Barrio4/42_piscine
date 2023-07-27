/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 12:13:12 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/12 11:04:38 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

/*
int	main(void)
{
	int	i;
	int	j;

	i = 10;
	j = 20;
	printf("%d, %d\n", i, j);
	ft_swap(&i, &j);
	printf("%d, %d", i, j);
	return (0);
}*/
