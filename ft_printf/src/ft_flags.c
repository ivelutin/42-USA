/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 21:08:07 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/09 06:15:39 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int				check_flag(char flg)
{
	if (flg == '+' || flg == '#' || flg == '-' || flg == '0' || flg == ' ')
		return(1);
	else
		return(0);
}

void			ft_flags(t_alpha *vz)
{
	if (vz->flag == '+')
		vz->flags.mas = 1;
	if (vz->flag == '-')
		vz->flags.men = 1;
	if (vz->flag == ' ')
		vz->flags.esp = 1;
	if (vz->flag == '0')
		vz->flags.cero = 1;
	if (vz->flag == '#')
		vz->flags.ht = 1;
}

void			check_widpre(const char **str, t_alpha *vz)
{
	if (ft_isdigit(**str) && (vz->flags.wid = 1))
		vz->flags.widnum = ft_atoi(*str);
	while (ft_isdigit(**str))
		*str += 1;
	if (*str)
	{
		if (**str == '.' && (vz->flags.pre = 1))
			*str += 1;
		vz->flags.prenum = ft_atoi(*str);
		while (ft_isdigit(**str))
			*str += 1;
	}
}

static	int		mod_flag(int c)
{
	if (c == 'h' || c == 'l' || c == 'j' || c == 'z')
		return (1);
	return (0);
}

void			check_mod(const char **mod, t_alpha *vz)
{
		if (**mod == 'h' && **mod && (**mod + 1)!= 'h')
			vz->mod.h = 1;
		else if (**mod == 'h' && **mod && (**mod + 1) == 'h')
			vz->mod.hh = 1;
		else if (**mod == 'l' && **mod && (**mod + 1) != 'l')
			vz->mod.l = 1;
		else if (**mod == 'l' && **mod && (**mod + 1) == 'l')
			vz->mod.ll = 1;
		else if (**mod == 'j')
			vz->mod.j = 1;
		else if (**mod == 'z')
			vz->mod.z = 1;
		while (mod_flag(**mod))
			*mod += 1;
}
