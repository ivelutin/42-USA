/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 16:06:56 by ivelutin          #+#    #+#             */
/*   Updated: 2017/08/02 00:30:21 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/keys.h"

void	ft_draw(t_alpha *vz)
{
	intmax_t		x;
	intmax_t		y;

	y = 0;
	while (y < HEIGHT)
	{
		x = 0;
		while (x < WIDTH)
		{
			if (vz->frac.mandela == 1)
				ft_mandela(vz, x, y);
			else if (vz->frac.julia == 1)
				ft_julia(vz, x, y);
			else if (vz->frac.ship == 1)
				ft_ship(vz, x, y);
			else if (vz->frac.ring == 1)
				one_ring(vz, x, y);
			x++;
		}
		y++;
	}
	text(vz);
}

int		ft_ladilla(t_alpha *vz)
{
	if (!ft_strcmp(vz->frac.tmp[1], "mandelbrot"))
		vz->frac.mandela = 1;
	else if (!ft_strcmp(vz->frac.tmp[1], "julia"))
		vz->frac.julia = 1;
	else if (!ft_strcmp(vz->frac.tmp[1], "burningship"))
		vz->frac.ship = 1;
	else if (!ft_strcmp(vz->frac.tmp[1], "one_ring"))
		vz->frac.ring = 1;
	else
	{
		write(1, "usage: ./fractol [mandelbrot /julia /burningship]\n", 51);
		return (0);
	}
	return (1);
}
