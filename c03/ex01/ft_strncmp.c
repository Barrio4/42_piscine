/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:02:58 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/18 13:36:58 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while ((s1 && *s2) && (*s1 == *s2) && n - 1)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(const unsigned char *)s1 - *(unsigned char *)s2);
}
/*
int	main(void)
{
	char str1[] = "xxxxxx";
	char str2[] = "yyyyyy";
	int	n;

	n = 0;
	printf("%d\n", ft_strncmp(str1, str2, n));
	printf("%d\n", strncmp(str1, str2, n));
	return (0);
}*/
