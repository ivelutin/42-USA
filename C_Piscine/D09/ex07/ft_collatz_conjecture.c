/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 00:45:08 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/04 00:45:13 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	if ((base % 2) != 1)
		base = base / 2;
	else
		base = 3 * base + 1;
	return (ft_collatz_conjecture(base) + 1);
}
