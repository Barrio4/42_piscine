/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yemoreno <yemoreno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:31:19 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/09 20:58:33 by yemoreno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y);

void	ft_print_line(char a, char b, int n);

void	rush(int x, int y)
{
	int	count_y;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	count_y = 0;
	while (count_y <= y - 1)
	{
		if (count_y == 0)
			ft_print_line('A', 'B', x);
		else if (count_y == y - 1)
			ft_print_line('C', 'B', x);
		else
			ft_print_line('B', ' ', x);
		count_y++;
	}
}

void	ft_print_line(char a, char b, int n)
{
	int	count_x;

	count_x = 0;
	if (n == 1)
		ft_putchar(a);
	else
	{
		while (count_x <= n - 1)
		{
			if (count_x == 0 || count_x == n - 1)
				ft_putchar(a);
			else
				ft_putchar(b);
			count_x++;
		}
	}
	ft_putchar('\n');
}
