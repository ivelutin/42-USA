/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:55:47 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/12 16:55:52 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
	return (0);
}

int		ft_atoi(char **str)
{
	int		nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}
