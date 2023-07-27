/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:01:36 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/25 20:32:27 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	same(char *str, char *find, int cont)
{
	int	k;
	int	m;

	m = cont;
	k = 0;
	while (find[k])
	{
		if (find[k] != str[m])
			return (-1);
		m++;
		k++;
	}
	return (cont);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (same(str, to_find, i))
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	base[] = "es lo que dicen";
	//char	find[] = "que";

	printf("mio: %s\n", ft_strstr(base, "que"));
	printf("default: %s\n", strstr(base, "que"));
	return (0);
}*/
