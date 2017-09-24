/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 00:39:02 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/09 10:33:59 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void		ft_putspre(t_alpha *vz, char *str)
{
	int i;

	i = 0;
	while(str[i] && i < vz->flags.prenum &&  vz->flags.prenum != 0)
	{
		ft_putchar(str[i]);
		i++;
	}
}

void		ft_cantpre(char *str, int len)
{
	int i;

	i = 0;
	while (*str && i < len)
	{
		ft_putchar(*str);
		str++;
		i++;
	}
}

void		wchar_s(va_list sos)
{
	wchar_t	*str;

	str = va_arg(sos, wchar_t *);
	ft_putwstr(str);
}

void		ft_s(va_list sos, t_alpha *vz)
{
	char	*str;

	if (vz->mod.l)
		wchar_s(sos);
	else
	{
		str = va_arg(sos, char *);
		if(vz->flags.mas != 1 && vz->flags.wid != 1 && vz->flags.pre != 1)
			ft_putstr(str);
		else if (vz->flags.pre == 1 && vz->flags.wid != 1)
			ft_putspre(vz, str);
		else if (vz->flags.pre != 1 && vz->flags.men != 1)
			ft_putstr(str);
		else if (vz->flags.pre == 1 && vz->flags.men != 1)
			if (vz->flags.prenum != 0)
				ft_cantpre(str, vz->flags.prenum);
	}
}
