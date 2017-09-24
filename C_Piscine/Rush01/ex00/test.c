/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 17:03:01 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/06 17:03:05 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		**puzzlegrid(char **argv);
int		valid_givens(char **argv);
void	printpuzzle(int **puzzle);
int		valid_numchk(int **grid, int row, int col, int num);

int		precheck(int **grid)
{
	int row;
	int col;
	int spot;
	int num;

	spot = 0;
	while (spot < 81)
	{
		row = spot / 9;
		col = spot % 9;
		if (grid[row][col] != 0)
		{
			num = grid[row][col];
			grid[row][col] = 0;
			if (valid_numchk(grid, row, col, num) == 0)
				return (0);
			grid[row][col] = num;
		}
		spot++;
	}
	return (1);
}

int		solver(int **grid, int spot)
{
	int row;
	int col;
	int num;

	row = spot / 9;
	col = spot % 9;
	num = 1;
	if (spot >= 81)
		return (1);
	if (grid[row][col] != 0)
		return (solver(grid, spot + 1));
	while (num <= 9)
	{
		if (valid_numchk(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solver(grid, spot + 1))
				return (1);
			else
				grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

int		dupesolver(int **grid, int spot)
{
	int row;
	int col;
	int num;

	row = spot / 9;
	col = spot % 9;
	num = 9;
	if (spot >= 81)
		return (1);
	if (grid[row][col] != 0)
		return (dupesolver(grid, spot + 1));
	while (num >= 1)
	{
		if (valid_numchk(grid, row, col, num))
		{
			grid[row][col] = num;
			if (dupesolver(grid, spot + 1))
				return (1);
			else
				grid[row][col] = 0;
		}
		num--;
	}
	return (0);
}

int		postcheck(int **puzzle, int **dupe)
{
	int row;
	int col;
	int spot;

	spot = 0;
	while (spot < 81)
	{
		row = spot / 9;
		col = spot % 9;
		if (puzzle[row][col] != dupe[row][col])
			return (0);
		spot++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int **puzzle;
	int **dupe;

	if (argc != 10 || valid_givens(argv) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	puzzle = puzzlegrid(argv);
	dupe = puzzlegrid(argv);
	if (precheck(puzzle) == 0)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (solver(puzzle, 0) && dupesolver(dupe, 0))
		if (postcheck(puzzle, dupe))
		{
			printpuzzle(puzzle);
			return (0);
		}
	write(1, "Error\n", 6);
	return (0);
}
