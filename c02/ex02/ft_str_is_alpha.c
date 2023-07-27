/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:24:26 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/16 20:56:54 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
			res = 1;
		else if (str[cont] >= 'a' && str[cont] <= 'z')
			res = 1;
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
	char arr[] = "Hola,";

	printf("%d\n", ft_str_is_alpha(arr));
	return (0);
}*/
