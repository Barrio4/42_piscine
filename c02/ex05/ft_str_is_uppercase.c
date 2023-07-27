/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:14:42 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 19:53:23 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
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
		if (str[cont] >= 'A' && str[cont] <= 'Z')
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
	char arr[] = "HOLA";

	printf("%d\n", ft_str_is_uppercase(arr));
	return (0);
}*/
