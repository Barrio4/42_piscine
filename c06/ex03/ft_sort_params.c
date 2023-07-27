/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 13:18:52 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/24 11:15:37 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		pos[argc - 1];
	int		i;
	int		j;
	int		cont1;
	int		cont2;

	cont1 = 1;
	i = 0;
	if (argc > 0)
	{
		while (i < argc - 2)
		{
			while (argv[cont1][0])
			{
				cont2 = 0;
				while (argv[cont2][0])
				{
					if (argv[cont1][0] < argv[cont2][0])
						pos[i] = i;
					cont2++;
				}
				cont1++;
			}
			i++;
		}
		i = 0;
		while (i < argc - 1)
		{
			j = 0;
			while (argv[pos[i]][j])
			{
				write(1, &argv[pos[i]][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
