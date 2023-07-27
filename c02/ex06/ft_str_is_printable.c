/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 11:17:26 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 20:01:05 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
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
		if (str[cont] >= 32 && str[cont] <= 126)
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
	char arr[] = "Hola ";

	printf("%d\n", ft_str_is_printable(arr));
	return (0);
}*/
