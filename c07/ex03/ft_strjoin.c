/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 08:19:11 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/26 17:19:31 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

int	ft_strcat(char *dest, char *src, int i)
{
	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (i);
}
/*
char	*ft_concat(char *strs, char *ptr, int i, char *sep, int total_len)
{
	int	cont;

	cont = 0;
	while (strs[i] != '\0')
	{
		cont = ft_strcat(ptr, &strs[i], cont);
		if (cont < total_len)
			cont = ft_strcat(ptr, sep, cont);
		i++;
	}
	return (ptr);
}*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		cont;
	char	*ptr;
	int		total_len;

	cont = 0;
	total_len = 0;
	i = -1;
	while (++i < size)
		total_len += ft_strlen(strs[i]);
	total_len += ft_strlen(sep) * (size - 1);
	ptr = NULL;
	i = -1;
	if (size == 0)
		return (ptr);
	ptr = (char *)malloc(sizeof(char) * total_len + 1);
	if (ptr == NULL)
		return (NULL);
	/*
	while (++i < size)
		ft_concat(strs[i], ptr, i, sep, total_len);*/

	while (++i < size)
	{
		cont = ft_strcat(ptr, strs[i], cont);
		if (i < size - 1)
			cont = ft_srtcat(ptr, strs[i], cont);
		i++;
	}
	ptr[total_len] = '\0';
	return (ptr);
}

int    main(void)
{
    int		size;
    char	*strs[4] =  {"todo", "lo", "que", "hacemos"};
    char	sep[] = "...";
    int		i;
    char	*dest;

    i = -1;
    size = 4;
    dest = ft_strjoin(size, strs, sep);
    printf("%s\n", dest);
    return (0);
}
