/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheap.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:02:48 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/06 17:02:53 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		**puzzlegrid(char **argv)
{
	int		**puzzle_atoi;
	int		col;
	int		row;

	puzzle_atoi = (int**)malloc(sizeof(int*) * 9);
	row = 0;
	while (row < 9)
	{
		puzzle_atoi[row] = (int*)malloc(sizeof(int) * 9);
		col = 0;
		while (col < 9)
		{
			puzzle_atoi[row][col] = 0;
			if (argv[row + 1][col] >= '1' && argv[row + 1][col] <= '9')
				puzzle_atoi[row][col] = argv[row + 1][col] - '0';
			col++;
		}
		row++;
	}
	return (puzzle_atoi);
}

int		valid_givens(char **argv)
{
	int row;
	int col;
	int given;

	row = 0;
	given = 0;
	while (row < 9)
	{
		col = 0;
		while (argv[row + 1][col] != '\0')
		{
			if (argv[row + 1][col] >= '1' && argv[row + 1][col] <= '9')
				given++;
			else if (argv[row + 1][col] != '.')
				return (0);
			col++;
		}
		if (col != 9)
			return (0);
		row++;
	}
	if (given < 17)
		return (0);
	return (1);
}

void	printpuzzle(int **puzzle)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			c = puzzle[row][col] + '0';
			write(1, &c, 1);
			col++;
			if (col < 9)
				write(1, " ", 1);
		}
		write(1, "\n", 1);
		row++;
	}
}

int		valid_numchk(int **grid, int row, int col, int num)
{
	int boxrow0;
	int boxcol0;
	int i;

	i = 0;
	boxrow0 = (row / 3) * 3;
	boxcol0 = (col / 3) * 3;
	while (i < 9)
	{
		if (grid[row][i] == num)
			return (0);
		if (grid[i][col] == num)
			return (0);
		if (grid[boxrow0 + (i % 3)][boxcol0 + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}
