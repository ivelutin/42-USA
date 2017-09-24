/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putrush.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   Bh: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 15:13:13 bh ivelutin          #+#    #+#             */
/*   Updated: 2016/11/13 15:13:14 bh ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int w, int h)
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

void	rush01(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1 || i < w || i > w * h - w)
			if (i == 1 || i == w * h)
				ft_putchar('/');
			else if (i == w || i == w * h - w + 1)
				ft_putchar('\\');
			else
				ft_putchar('*');
		else
			ft_putchar(' ');
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}

void	rush02(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1 || i < w || i > w * h - w)
			if (i == 1 || i == w)
				ft_putchar('A');
			else if (i == w * h || i == w * h - w + 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		else
			ft_putchar(' ');
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}

void	rush03(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1 || i < w || i > w * h - w)
			if (i == 1 || i == w * h - w + 1)
				ft_putchar('A');
			else if (i == w || i == w * h)
				ft_putchar('C');
			else
				ft_putchar('B');
		else
			ft_putchar(' ');
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}

void	rush04(int w, int h)
{
	int i;

	i = 1;
	while (i <= w * h && (w > 0 || h > 0))
	{
		if (i % w == 0 || i % w == 1 || i == 1 || i < w || i > w * h - w)
			if (i == 1 || i == w * h)
				ft_putchar('A');
			else if (i == w || i == w * h - w + 1)
				ft_putchar('C');
			else
				ft_putchar('B');
		else
			ft_putchar(' ');
		if (i % w == 0)
			ft_putchar('\n');
		i++;
	}
}
