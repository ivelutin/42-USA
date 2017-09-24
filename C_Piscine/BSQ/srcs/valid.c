/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 01:58:18 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/16 21:02:24 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int			ft_first_check(char *str, t_point ij)
{
	t_point	iline;
	char	**matrix;

	iline.i = 0;
	iline.j = 0;
	matrix = ft_splitter(str, 0);
	if (matrix == NULL)
		return (0);
	return (ft_trampa(str, ij, matrix, iline));
}

int			ft_trampa(char *str, t_point ij, char **matrix, t_point iline)
{
	t_check params;

	while (str[iline.i])
	{
		if (str[iline.i] == '\n')
			iline.j++;
		iline.i++;
	}
	if ((iline.j < 2) || (ft_line_num(str) + 1 != iline.j))
	{
		ft_putstr_e("map error\n");
		return (0);
	}
	params = ft_valid(str, matrix, 0, 0);
	if (params.valid == 1)
	{
		ft_solver(matrix, ij, params);
		return (1);
	}
	else
	{
		ft_putstr_e("map error\n");
		return (0);
	}
}

t_check		ft_valid(char *str, char **matrix, int i, int k)
{
	t_check	params;

	params.empty = ft_empty(str);
	params.obstacle = ft_obstacle(str);
	params.full = ft_full(str);
	params.valid = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	k = i;
	while (str[i] != '\n' && str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			i++;
		else
		{
			return (params);
		}
	}
	if (k != i - 3 && str[k] != '\n')
	{
		return (params);
	}
	params.valid = ft_valid_map(matrix, ft_line_num(str), \
		params.empty, params.obstacle);
	return (params);
}

int			ft_valid_map(char **str, int l_num, char empty, char obs)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (str[i][k])
		k++;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != empty && str[i][j] != obs && str[i][j] != '\n')
				return (0);
			j++;
		}
		if (k != j)
			return (0);
		i++;
	}
	if (i != l_num)
		return (0);
	return (1);
}
