/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 11:27:23 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 17:05:46 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	cont;

	cont = 0;
	while (src[cont])
	{
		dest[cont] = src[cont];
		++cont;
	}
	dest[cont] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char dest;
	char *ptr;
	char arr[] = "Hace calor";

	ptr = &dest;
	printf("%s\n", ft_strcpy(ptr, arr));
	return (0);
}*/
