/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:45:06 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/17 11:41:48 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
/*
int	main(void)
{
	char val;
	char *dest;
	char arr[] = "efgh";

	dest = &val;
	printf("%s\n", arr);
	dest = ft_strncpy(dest, arr, 5);
	printf("%s\n", dest);
	return (0);
}*/
