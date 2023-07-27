/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:34:19 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/22 19:23:24 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
/*
int	main(void)
{
	char	arr1[] = "hola";
	char	arr2[] = "holz";

	printf("%d\n", ft_strcmp(arr1, arr2));
	printf("%d\n", strcmp(arr1, arr2));
	return (0);
}*/
