/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:02:14 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 09:02:16 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (nb == 0 || (power == 0 && nb == 0))
		return (1);
	else if (power == 0 && nb > 0)
		return (1);
	else if (nb < 0 && power == 0)
		return (-1);
	else if (nb < 0 && power < 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}
