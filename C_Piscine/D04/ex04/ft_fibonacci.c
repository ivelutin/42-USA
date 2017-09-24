/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:02:37 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 09:02:38 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (0);
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

#include <stdio.h>

void	test(int index)
{
	printf("%d -> %d\n", index, ft_fibonacci(index));
}

int		main(void)
{
	test(-20);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(6);
	test(7);
	test(8);
	test(9);
	test(10);
	test(11);
	test(45);
	test(46);
	return (0);
}
