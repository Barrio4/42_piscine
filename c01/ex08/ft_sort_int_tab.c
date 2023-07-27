/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 17:09:47 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/12 16:17:55 by tbarrion         ###   ########.fr       */
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
	printf("\n\n");
}
*/
void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	cont;
	int	cont2;

	cont = 0;
	while (cont <= size - 1)
	{
		cont2 = 0;
		while (cont2 <= size - 1)
		{	
			if (tab[cont] < tab[cont2])
			{
				ft_swap(&tab[cont], &tab[cont2]);
			}
			cont2++;
		}
		cont++;
	}
}
/*
int	main(void)
{
	int arr[10] = {20, 97, 64, 742, 21, 89, 11, 97, 9, 852};
	print_arr(arr, 10);
	ft_sort_int_tab(arr, 10);
	print_arr(arr, 10);
	return (0);
}*/
