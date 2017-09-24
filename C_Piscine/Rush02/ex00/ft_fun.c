/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fun.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:59:10 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/12 16:59:12 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rush.c"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar('0' + n % 10);
	return(0);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_rush(char *rush, int *xy, int i, int num_rushes)
{
	ft_putstr("[");
	ft_putstr(rush);
	ft_putstr("] [");
	ft_putnbr(xy[0]);
	ft_putstr("] [");
	ft_putnbr(xy[1]);
	ft_putstr("]");
	if (i < num_rushes)
		ft_putstr(" || ");
}
