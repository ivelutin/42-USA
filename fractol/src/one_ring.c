/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   one_ring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 18:46:24 by ivelutin          #+#    #+#             */
/*   Updated: 2017/08/02 00:25:23 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/keys.h"

void		one_ring(t_alpha *vz, intmax_t x, intmax_t y)
{
	int i;
	int	color;

	i = 0;
	vz->p.creal = vz->mv.xfactor;
	vz->p.cimag = vz->mv.yfactor;
	vz->p.nre = 1.5 * (x - WIDTH / 2) /
		(0.5 * vz->mv.zoom * WIDTH) + vz->mv.movex;
	vz->p.nim = (y - HEIGHT / 2) / (0.5 * vz->mv.zoom * HEIGHT) + vz->mv.movey;
	while (i < vz->p.maxi && vz->p.nre * vz->p.nre + vz->p.nim * vz->p.nim < 4)
	{
		vz->p.ore = vz->p.nre;
		vz->p.oim = vz->p.nim;
		vz->p.nre = vz->p.ore * vz->p.ore - vz->p.oim * vz->p.oim + vz->p.creal;
		vz->p.nim = 2 * fabsl(vz->p.ore * vz->p.oim) + vz->p.cimag;
		i++;
	}
	color = draw_color(i, vz->p.maxi, vz);
	mlx_pixel_put(vz->mlx.mlx, vz->mlx.win, x, y, color);
}
