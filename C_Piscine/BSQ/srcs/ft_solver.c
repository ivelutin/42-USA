/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 00:03:20 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/16 15:39:52 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		**n_mtx_malloc(char **matrix)
{
	int i;
	int j;
	int **n_mtx;

	i = 0;
	while (matrix[i])
	{
		j = 0;
		while (matrix[i][j])
			j++;
		i++;
	}
	n_mtx = malloc(sizeof(int *) * i + 1);
	i = 0;
	while (matrix[i])
	{
		n_mtx[i] = malloc(sizeof(int) * j);
		i++;
	}
	return (n_mtx);
}

void	ft_values(int **n_mtx, char **matrix, t_point ij, char obs)
{
	if (ij.i == 0 || ij.j == 0)
	{
		if (matrix[ij.i][ij.j] == obs)
			n_mtx[ij.i][ij.j] = 1;
		else
			n_mtx[ij.i][ij.j] = 2;
	}
	else
	{
		if (matrix[ij.i][ij.j] == obs)
			n_mtx[ij.i][ij.j] = 1;
		else
			n_mtx[ij.i][ij.j] = ft_min(n_mtx[ij.i - 1][ij.j - 1], \
					n_mtx[ij.i - 1][ij.j], n_mtx[ij.i][ij.j - 1]);
	}
}

int		ft_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a + 1);
	else if (b <= c && b <= a)
		return (b + 1);
	else
		return (c + 1);
}

void	ft_solver(char **matrix, t_point ij, t_check params)
{
	t_max	max;
	int		**n_mtx;

	max.max = 1;
	n_mtx = n_mtx_malloc(matrix);
	ij.i = 0;
	while (matrix[ij.i])
	{
		ij.j = 0;
		while (matrix[ij.i][ij.j] != '\n')
		{
			ft_values(n_mtx, matrix, ij, params.obstacle);
			if (n_mtx[ij.i][ij.j] > max.max)
			{
				max.max = n_mtx[ij.i][ij.j];
				max.i = ij.i + 1;
				max.j = ij.j + 1;
			}
			ij.j++;
		}
		n_mtx[ij.i][ij.j] = '\0';
		ij.i++;
	}
	n_mtx[ij.i] = 0;
	ft_sqr(n_mtx, max, params);
}
