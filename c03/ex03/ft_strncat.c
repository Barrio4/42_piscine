/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 15:57:54 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/22 19:24:59 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src && nb > 0)
	{
		dest[i] = *src;
		i++;
		src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	arr1[50] = "hola";
	char	arr2[] = "adios";

	printf("%s\n", ft_strncat(arr1, arr2, 3));
	return (0);
}*/
