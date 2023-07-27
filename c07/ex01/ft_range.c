/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:20:23 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 16:31:25 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
/*
int	main(void)
{
	int	*arr;
	int	i;
	int	min;
	int max;

	min = -38;
	max = -5;
	i = -1;
	arr = ft_range(min, max);
	while (++i < max - min)
		printf("%i\n", arr[i]);
	return (0);
}*/
