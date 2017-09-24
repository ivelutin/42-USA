/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_loco.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 22:32:40 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/16 22:32:42 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	ft_loco(t_point ij)
{
	char	*str;
	int		fd;

	fd = 0;
	str = ft_read(fd);
	close(fd);
	if (str)
	{
		if (ft_first_check(str, ij) == 1)
			return (0);
		else
		{
			ft_putstr_e("map error\n");
			return (0);
		}
		return (0);
	}
	else
	{
		ft_putstr_e("map error\n");
		return (0);
	}
	return (0);
}

int	ft_vamuu(t_point ij, int argc, char **argv)
{
	char	*str;
	int		i;
	int		fd;

	i = 1;
	while (i < argc)
	{
		if (i > 1)
			ft_putchar('\n');
		fd = open(argv[i], O_RDONLY);
		str = ft_read(fd);
		close(fd);
		if (str == NULL)
		{
			ft_putstr_e("map error\n");
			return (0);
		}
		else
			ft_first_check(str, ij);
		free(str);
		i++;
	}
	return (0);
}
