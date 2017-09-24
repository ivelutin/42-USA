/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 00:13:59 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 00:14:00 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;

	i = 1;
	while (i <= x * y && (x > 0 || y > 0))
	{
		if (i % x == 0 || i % x == 1 || i == 1 || i < x || i > x * y - x)
			if (i == 1 || i == x * y)
				ft_putchar('A');
			else if (i == x || i == x * y - x + 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		else
			ft_putchar(' ');
		if (i % x == 0)
			ft_putchar('\n');
		i++;
	}
}
