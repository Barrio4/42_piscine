/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 07:30:43 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 16:30:07 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*result;

	i = 0;
	if (min >= max)
		result = NULL;
	else
	{
		result = (int *)malloc(sizeof(int) * (max - min));
		if (result == NULL)
			return (NULL);
		while (min < max)
		{
			result[i] = min;
			i++;
			min++;
		}
	}
	return (result);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		*range = (int *)malloc(sizeof(char) * (max - min));
		if (*range == NULL)
			return (-1);
		*range = ft_range(min, max);
	}
	return (max - min);
}
/*
int	main(void)
{
	int	*arr = NULL;
	int	i;
	int	min;
	int max;

	min = -38;
	max = -5;
	i = -1;
	while (++i < ft_ultimate_range(&arr, min, max))
		printf("%d\n", arr[i]);
	return (0);
}*/
