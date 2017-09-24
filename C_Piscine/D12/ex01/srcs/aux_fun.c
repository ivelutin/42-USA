/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_fun.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:19:19 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/09 23:19:21 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_inc.h"

const char	*ft_strerror(int errnum)
{
	extern const char * const	sys_errlist[];
	extern const int			sys_nerr;

	if (errnum < 0)
		errnum = -errnum;
	if (errnum < sys_nerr)
	{
		return (sys_errlist[errnum]);
	}
	return ("Unknown error");
}

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(const char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int			ft_print_custom_error(int eno, char *argv)
{
	ft_putstr(g_progname);
	ft_putstr(": ");
	ft_putstr(argv);
	ft_putstr(": ");
	ft_putstr(ft_strerror(eno));
	ft_putstr("\n");
	return (0);
}
