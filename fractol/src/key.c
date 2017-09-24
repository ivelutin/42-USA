/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:49:21 by ivelutin          #+#    #+#             */
/*   Updated: 2017/08/02 00:31:52 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/keys.h"

int		mouse_move(int x, int y, t_alpha *vz)
{
	if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT || vz->p.mouse_on != 1)
		return (0);
	vz->mv.xfactor = x * (1.5 / WIDTH) - 1.5;
	vz->mv.yfactor = y * (1.5 / HEIGHT) - 1.5;
	ft_draw(vz);
	return (0);
}

int		mouse_zoom(int key, int x, int y, t_alpha *vz)
{
	if (key == 4)
	{
		vz->mv.zoom *= 1.1;
		vz->mv.movey += (y - HEIGHT / 2) / (HEIGHT * 2.5) / vz->mv.zoom;
		vz->mv.movex += (x - WIDTH / 2) / (WIDTH * 2.5) / vz->mv.zoom;
	}
	else if (key == 5)
		vz->mv.zoom /= 1.3;
	ft_draw(vz);
	return (0);
}

int		key_hook(int key, t_alpha *vz)
{
	if (key == KEY_M)
		vz->p.mouse_on = 1;
	else if (key == KEY_COMMA)
		vz->p.mouse_on = 0;
	else if (key == KEY_C)
		vz->p.color *= 5;
	else if (key == ESC)
		exit(0);
	else if (key == KEY_PAGEUP || key == KEY_PAGEDOWN ||
		key == PADPLUS || key == PADMINUS)
		zoomit(vz, key);
	else if (key == UPARROW || key == DOWNARROW ||
		key == RIGHTARROW || key == LEFTARROW)
		move(vz, key);
	ft_draw(vz);
	return (0);
}
