/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarrion <tbarrion@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:25:11 by tbarrion          #+#    #+#             */
/*   Updated: 2023/07/16 17:51:28 by tbarrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// check_col mira si hay valores iguales en una columna (same con rows)
int	check_col(int matrix[][],int col, int size)
{
	int i;
	i = 0;
	while (matrix[i][col] <= size - 1)
	{
		if (matrix[i][col]
	}
}

// 4 arrays para clues
// check si hay 1s o 4s en los arrays de clues e imprimir en celdas


//	Comprovaciones de reglas - con 4 arrays de clues

int	check_array(int vistas[4][4], int size)
{
	int cont;
	cont = 0;
	while (cont < size)
	{
		while (cont < size)
		{
			// comprovaciones de las reglas
			// 		numeros de en frente sumados mayor o igual que 3
			if (!(row_up[cont] + row_down[cont] >= 3))
				write(1, "Error", 5);
			//		numeros de vista entre 1 y size - 1
			else if (!((row_up[cont] >= 1) && (row_up[cont] <= size - 1)))
				write(1, "Error", 5);
			else if (!((row_down[cont] >= 1) && (row_down[cont] <= size - 1)))
				write(1, "Error", 5);
			else if (!(col_left[cont] + col_right[cont] >= 3))
				write(1, "Error", 5);
			else if (!((col_left[cont] >= 1) && (col_left[cont] <= size - 1)))
				write(1, "Error", 5);
			else if (!((col_right[cont] >= 1) && (col_right[cont] <= size - 1)))
				write(1, "Error", 5);
			else
				// llama a alguna funcion
			cont++;
		}
	}
}

//	Comprovacion de reglas - con 1 matriz de clues
int	check_rules(int vistas[4][4], int size)
{
	int i = 0;
	int j = 0;
	
}


// comrpovar si hay 1s o 4s para escribir numeros con certeza
// 		arrays, size, matriz, celda(?)
int	check_clues(
