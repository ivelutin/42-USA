/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 16:54:56 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/09 04:55:50 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define  FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft.h"

typedef struct		s_flag
{
	int				mas;
	int				men;
	int				esp;
	int				cero;
	int				ht;
	int				wid;
	int				pre;
	int				widnum;
	int				prenum;
}					t_flag;

typedef struct		s_mod
{
	int				h;
	int				hh;
	int				l;
	int				ll;
	int				j;
	int				z;
}					t_mod;

typedef struct		s_alpha
{
	t_flag			flags;
	t_mod			mod;
	char			c;
	char			flag;
	char			widpre;
	const char		form;

}					t_alpha;

/*
**		ft_printf.c
*/
int			ft_printf(const char *form, ...);
void		ft_catch(const char **form, va_list sos, t_alpha *vz);
int			ft_ccs(va_list sos, t_alpha *vz);

/*
** ft_conv.c
*/
void		ft_conv(va_list sos, t_alpha *vz);

/*
** ft_flags.c
*/
void		ft_flags(t_alpha *vz);
int			check_flag(char flg);
void		check_widpre(const char **str, t_alpha *vz);
void		check_mod(const char **mod, t_alpha *vz);

/*
** ft_s.c
*/
void		ft_s(va_list sos, t_alpha *vz);

/*
** ft_id.c
*/
void		ft_id(va_list sos);
#endif
