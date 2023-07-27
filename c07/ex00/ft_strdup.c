/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:55:15 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 16:30:39 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dst;
	int		len;
	int		i;

	i = -1;
	len = -1;
	while (src[++len])
	dst = (char *) malloc(sizeof(char) * len);
	if (dst == NULL)
		return (NULL);
	while (++i < len)
		dst[i] = src[i];
	return (dst);
}
/*
int	main(void)
{
	char	arr[] = "cuantas?";
	char	*target1;
	char	*target2;

	target1 = ft_strdup(arr);
	target2 = strdup(arr);
	printf("%s\n", target1);
	//printf("oficial: %s\n", target2);
	return (0);
}*/
