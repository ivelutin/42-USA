/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bh: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 00:13:06 bh ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 00:13:07 bh ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1)
		{
			if (i > w && i <= w * (h - 1))
				ft_putchar('|');
			else
				ft_putchar('o');
		}
		else
		{
			if (i > 1 && i < w)
				ft_putchar('-');
			else if (i >= w * h - w + 1 && i < w * h)
				ft_putchar('-');
			else
				ft_putchar(' ');
		}
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}
