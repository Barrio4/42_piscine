/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:50:45 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 19:54:47 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	cont;
	int	aux;

	aux = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'A' && str[cont] <= 'Z')
		{
			aux = str[cont];
			str[cont] = aux + 32;
		}
		cont++;
	}
	return (str);
}
/*
int	main(void)
{
	char arr[] = "Hola COMO estas hoY?";

	printf("%s\n", ft_strlowcase(arr));
	return (0);
}*/
