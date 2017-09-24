/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 21:58:09 by ivelutin          #+#    #+#             */
/*   Updated: 2017/08/02 00:29:59 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/keys.h"

void	set(t_alpha *vz)
{
	vz->mv.zoom = 1;
	vz->mv.movex = -0.5;
	vz->mv.movey = 0;
	vz->p.maxi = 100;
	vz->p.colormax = 0X00000000;
	vz->p.color = 1;
	vz->p.mouse_on = 0;
	vz->p.creal = -0.7;
	vz->p.cimag = 0.27015;
	vz->mv.xfactor = 0;
	vz->mv.yfactor = 0;
}

void	put_text(char *str, int i, int j, t_alpha *vz)
{
	mlx_string_put(vz->mlx.mlx, vz->mlx.win, 0 + i, 0 + j, 0xFFFFFF, str);
}

void	text(t_alpha *vz)
{
	put_text("ITERTAIONS:", 0, 0, vz);
	put_text(ft_itoa(vz->p.maxi), 125, 0, vz);
	put_text("ZOOM:", 0, 20, vz);
	put_text(ft_itoa(vz->mv.zoom), 125, 20, vz);
	put_text("X", 0, 40, vz);
	put_text(ft_itoa(vz->mv.zoom), 125, 40, vz);
}

int		main(int argc, char **argv)
{
	t_alpha *vz;

	if (!(vz = (t_alpha*)ft_memalloc(sizeof(t_alpha))))
		return (0);
	set(vz);
	vz->frac.tmp = argv;
	if (argc == 2)
	{
		if (ft_ladilla(vz))
		{
			vz->mlx.mlx = mlx_init();
			vz->mlx.win = mlx_new_window(vz->mlx.mlx, WIDTH, HEIGHT, "FRACTOL");
			ft_draw(vz);
			mlx_hook(vz->mlx.win, MOTION, PTR_MOTION, mouse_move, vz);
			mlx_mouse_hook(vz->mlx.win, mouse_zoom, vz);
			mlx_key_hook(vz->mlx.win, key_hook, vz);
			mlx_loop(vz->mlx.mlx);
		}
	}
	else
		write(1,
			"usage: ./fractol [mandelbrot / julia / burningship / one_ring]\n",
				63);
	return (0);
}
