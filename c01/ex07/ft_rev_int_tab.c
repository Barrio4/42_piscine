/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:49:46 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/12 16:14:24 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
/*
void	print_arr(int *arr, int n)
{
	int cont;

	cont = 0;
	while (cont <= n - 1)
	{
		printf("%d ", arr[cont]);
		cont++;
	}
	printf("\n");
}
*/
void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	cont;

	cont = 0;
	while (cont < size / 2)
	{
		ft_swap(&tab[cont], &tab[size - 1 - cont]);
		cont++;
	}
}
/*
int	main(void)
{
	int nums[7] = {20, 97, 64, 742, 21, 89, 11};

	print_arr(nums, 7);
	
	ft_rev_int_tab(nums, 7);

	print_arr(nums, 7);
	return (0);
}*/
