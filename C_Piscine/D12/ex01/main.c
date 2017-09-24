/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:19:01 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/09 23:19:02 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_inc.h"
#include <errno.h>
#include <stdio.h>

void	ft_set_progname(char *argv0)
{
	char *slash;

	slash = 0;
	while (*argv0)
	{
		if (*argv0 == '/')
			slash = argv0;
		argv0++;
	}
	if (slash)
		g_progname = slash + 1;
	else
		g_progname = argv0;
}

void	ft_print_cat(int f, char *argv_x)
{
	char	buf[BUF_SIZE + 1];
	int		r;

	while ((r = read(f, buf, BUF_SIZE)))
	{
		if (r == -1)
		{
			ft_print_custom_error(errno, argv_x);
			return ;
		}
		buf[r] = '\0';
		ft_putstr(buf);
	}
}

int		main(int argc, char **argv)
{
	int	f;
	int	i;

	ft_set_progname(argv[0]);
	i = 0;
	while (++i < argc)
	{
		if ((f = open(argv[i], O_RDONLY)) == -1)
			ft_print_custom_error(errno, argv[i]);
		if (f != -1)
			ft_print_cat(f, argv[i]);
		close(f);
	}
	return (0);
}
