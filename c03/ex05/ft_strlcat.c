/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 20:19:37 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/25 20:27:48 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	while (src[j] != '\0')
		j++;
	src_len = j;
	j = 0;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[j] != '\0' && j < size - dest_len - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
/*
int	main(void)
{
	char	arr1[100] = "todo lo";
	char	arr2[] = " demas";
	int		tam;

	tam = 0;
	printf("%u\n", ft_strlcat(arr1, arr2, tam));
	printf("%s\n", arr1);
	printf("%lu\n", strlcat(arr1, arr2, tam));
	return (0);
}*/
