/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:44:40 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/13 14:44:42 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.h"
#define BUF_SIZE 1

void	ft_comp(char *buffer, int x, int y)
{
	int		i;

	i = 0;
	if (ft_strcmp(buffer, rush00(x, y)) == 0)
	{
		ft_rush("[rush-00]", x, y);
		i++;
	}
	if (ft_strcmp(buffer, rush01(x, y)) == 0)
	{
		if (i > 0)
			ft_putstr(" || ");
		ft_rush("[rush-01]", x, y);
		i++;
	}
	if (ft_strcmp(buffer, rush02(x, y)) == 0)
	{
		if (i > 0)
			ft_putstr(" || ");
		ft_rush("[rush-02]", x, y);
		i++;
	}

	if (i == 0)
		ft_putstr("error");
	ft_putchar('\n');
}

int main()
{
	char	*mem;
	char	buf[BUF_SIZE + 1];
	int		ret;
	int		x;
	int		y;
	int 	i;

	i = 0;
	x = 0;
	y = 0;
	mem = (char*)malloc(BUF_SIZE);
	while ((ret = read(0, buf, BUF_SIZE)))
	{
		if (buf[0] == '\n')
			y++;
		if (buf[0] != '\n')
			x++;
		buf[ret] = '\0';
		mem[i] = buf[0];
		i++;
	}
	mem[i] = '\0';
	if (y != 0)
		x = x / y;
	ft_comp(mem, x, y);
	return (0);
}
