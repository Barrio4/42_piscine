/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 13:41:53 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/15 16:21:56 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}
/*
int	main(void)
{
	int tam;

	char a[] = "Hello world";
	tam = ft_strlen(&a[0]);
	printf("%s\n", a);
	printf("%d\n", tam);
}*/
