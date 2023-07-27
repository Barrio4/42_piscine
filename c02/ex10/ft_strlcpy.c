/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 13:15:07 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/17 16:37:42 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
//#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	cont;
	unsigned int	i;

	i = 0;
	cont = 0;
	while (src[i] != '\0')
		i++;
	if (size == 0)
		return (i);
	while (src[cont] && cont < (size - 1))
	{
		dest[cont] = src[cont];
		cont++;
	}
	dest[cont] = '\0';
	return (i);
}
/*
int	main(void)
{
	char arr[] = "ehyyrftyxxxxx";
	char dest;
	char *ptr;
	unsigned int num;

	ptr = &dest;
	num = 0;
	printf("%d\n", ft_strlcpy(ptr, arr, num));
	printf("%s\n", ptr);
	//printf("%lu\n", strlcpy(ptr2, arr, num));
	//printf("%s\n", ptr2);
	return (0);
}*/
