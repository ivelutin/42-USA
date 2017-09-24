/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 17:16:06 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/16 21:01:25 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main(int argc, char **argv)
{
	int		i;
	t_point ij;

	ij.i = 0;
	ij.j = 0;
	i = 1;
	if (argc == 1)
		return (ft_loco(ij));
	else
		return (ft_vamuu(ij, argc, argv));
	return (0);
}
