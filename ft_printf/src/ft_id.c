/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_id.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 00:40:20 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/06 00:40:28 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_id(va_list sos)
{
	int d;
	char *str;

	d = va_arg(sos, int);
	str = ft_itoa(d);
	ft_putstr(str);
}
