/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:07:15 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 19:53:07 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_lowercase(char *str)
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
		if (str[cont] >= 'a' && str[cont] <= 'z')
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
	char arr[] = "hola";

	printf("%d\n", ft_str_is_lowercase(arr));
	return (0);
}*/
