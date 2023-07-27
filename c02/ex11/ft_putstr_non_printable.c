/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:24:57 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/17 16:20:24 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	dec_to_hex(int num)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num >= 16)
	{
		dec_to_hex(num / 16);
		dec_to_hex(num % 16);
	}
	else
	{
		ft_putchar(hex[num]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if (str[cont] >= 32 && str[cont] <= 126)
		{
			ft_putchar(str[cont]);
		}
		else
		{
			ft_putchar('\\');
			if (str[cont] < 16)
				ft_putchar('0');
			dec_to_hex(str[cont]);
		}
		cont++;
	}
}
/*
int	main(void)
{
	char	arr[];
	char	arr1[];

	arr[] = "Couco\nutu vas bien ?";
	ft_putstr_non_printable(arr);
	return (0);
}*/
