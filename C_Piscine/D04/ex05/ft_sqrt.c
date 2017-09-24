/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 09:02:54 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/29 09:02:56 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if (nb < 0)
	{
		return (0);
	}
	while ((root * root) < nb)
	{
		root += 1;
	}
	return (0);
}