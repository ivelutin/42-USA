/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:03:14 by ivelutin          #+#    #+#             */
/*   Updated: 2017/07/31 15:27:37 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fractol.h"
#include "../includes/keys.h"

unsigned int			draw_color(int i, int maxi, t_alpha *vz)
{
	unsigned int	color;
	unsigned char	red;
	unsigned char	green;
	unsigned char	blue;

	if (i == maxi)
		return (vz->p.colormax);
	red = (i * 10) * vz->p.color;
	green = (250 - (i * 2)) * vz->p.color;
	blue = (250 - (i * 10)) * vz->p.color;
	color = (red << 16) + (green << 8) + blue;
	return (color);
}
