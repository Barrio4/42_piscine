/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:02:23 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 19:52:28 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	cont;
	int	res;

	cont = 0;
	if (str[cont] == '\0')
	{	
		res = 1;
	}
	while (str[cont] != '\0')
	{
		if (str[cont] >= '0' && str[cont] <= '9')
		{
			res = 1;
		}
		else
		{
			res = 0;
			return (res);
		}
		cont++;
	}
	return (res);
}
/*
int	main(void)
{
	char arr[] = "4564";

	printf("%d\n", ft_str_is_numeric(arr));
	return (0);
}*/
