/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:22:07 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/09 21:06:43 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	ft_print_line(char a, char b, char c, int n);

void	rush(int x, int y)
{
	int	count_y;

	if (x <= 0 || y <= 0)
		return ;
	count_y = 0;
	while (count_y <= y - 1)
	{
		if (count_y == 0)
			ft_print_line('/', '*', '\\', x);
		else if (count_y == y -1)
			ft_print_line('\\', '*', '/', x);
		else
			ft_print_line('*', ' ', '*', x);
		count_y++;
	}
}

void	ft_print_line(char a, char b, char c, int n)
{
	int	count_x;

	count_x = 0;
	if (n == 1)
		ft_putchar(a);
	else
	{
		while (count_x <= n - 1)
		{
			if (count_x == 0)
				ft_putchar(a);
			else if (count_x == n - 1)
				ft_putchar(c);
			else
				ft_putchar(b);
			count_x++;
		}
	}
	ft_putchar('\n');
}
