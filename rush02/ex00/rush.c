/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:36:31 by alvega-g          #+#    #+#             */
/*   Updated: 2023/07/23 13:07:13 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	break_down(char *str, int length);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[j])
	{
		while (str[j + i] == to_find[i] && to_find[i])
			i++;
		if (to_find[i] == '\0')
			return (str + j);
		else
			i = 0;
		j++;
	}
	return (0);
}

int	get_size(char *str)
{
	int		fd;
	char	buffer[10];
	int		x;
	int		i;

	x = 1;
	i = 0;
	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_putstr("Dict Error\n");
	while (x > 0)
	{
		x = read(fd, buffer, 1);
		i++;
	}
	close(fd);
	if (x < 0)
	{
		ft_putstr("Dict Error\n");
		return (0);
	}
	else
		return (i + 1);
}

char	*get_dictionary(char *str)
{
	int		fd;
	char	*buffer;
	int		size;
	int		x;

	size = get_size(str);
	buffer = malloc(sizeof(char) * size);
	fd = open(str, O_RDONLY);
	if (fd == -1)
		ft_putstr("Dict Error\n");
	x = read(fd, buffer, size);
	close(fd);
	return (buffer);
}

void	lookup_dictionary(char *dict, char *nb)
{
	int		i;
	char	*needle;

	i = 0;
	needle = ft_strstr(dict, nb);
	while (!(needle[i] >= 'a' && needle[i] <= 'z'))
		i++;
	while (needle[i] != '\n')
	{
		ft_putchar(needle[i]);
		i++;
		if (needle[i] == '\n')
			return ;
	}
}

int	main(int argc, char **argv)
{
	char *dictionary;
	char *full_dictionary;
	char *number = argv[1];

	if (argc == 1)
		return (0);
	if (argc > 3)
		return (0);
	if (argc == 2)
		dictionary = "numbers.dict";
	if (argc == 3)
		dictionary = argv[1];

	full_dictionary = get_dictionary(dictionary);
	lookup_dictionary(full_dictionary, number);
	free(full_dictionary);
}