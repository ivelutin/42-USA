/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 02:36:00 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/16 17:51:57 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_sqr(int **n_mtx, t_max max, t_check params)
{
	t_point ij;

	ij.i = 0;
	while (n_mtx[ij.i])
	{
		ij.j = 0;
		while (n_mtx[ij.i][ij.j])
		{
			if (ij.i > (max.i - max.max) && ij.j > (max.j - max.max) \
					&& ij.i < max.i && ij.j < max.j)
				ft_putchar(params.full);
			else if (n_mtx[ij.i][ij.j] == 1)
				ft_putchar(params.obstacle);
			else
				ft_putchar(params.empty);
			ij.j++;
		}
		ft_putchar('\n');
		ij.i++;
	}
}
