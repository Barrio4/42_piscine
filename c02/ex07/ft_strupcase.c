/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:31:37 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 19:54:26 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	cont;
	int	aux;

	aux = 0;
	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 'a' && str[cont] <= 'z')
		{
			aux = str[cont];
			str[cont] = aux - 32;
		}
		cont++;
	}
	return (str);
}
/*
int	main(void)
{
	char arr[] = "Hola COMO estas hoY?";

	printf("%s\n", ft_strupcase(arr));
	return (0);
}*/
