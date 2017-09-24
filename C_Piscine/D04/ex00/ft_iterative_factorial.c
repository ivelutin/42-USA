/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:00:54 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 09:00:55 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int factional;

	factional = 1;
	i = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb >= i)
	{
		factional *= i;
		i += 1;
	}
	return (factional);
}
