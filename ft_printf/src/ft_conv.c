/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conv.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/11 04:40:43 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/09 01:06:28 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_conv(va_list sos, t_alpha *vz)
{
	if (vz->c == 's' || vz->c == 'S')
		ft_s(sos, vz);
	// if (vz->c == 'c' || vz->c == 'C')
	// 	ft_c(sos);
	else if (vz->c == 'd' || vz->c == 'i')
		ft_id(sos);
}

// sSpdioOuUxXcC
