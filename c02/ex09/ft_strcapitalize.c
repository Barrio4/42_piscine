/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 12:53:23 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/17 12:25:22 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] >= 'a' && str[cont] <= 'z') && (str[cont - 1] <= 47))
			str[cont] -= 32;
		else if (str[cont] >= 'A' && str[cont] <= 'Z')
			str[cont] += 32;
		cont++;
	}
	return (str);
}
/*
int	main(void)
{
	char	arr[] = "salut, comMent tu vas ? 42mots quarAnte-deux; cinquante+et+un";

	printf("%s\n", ft_strcapitalize(arr));
	return (0);
}*/
