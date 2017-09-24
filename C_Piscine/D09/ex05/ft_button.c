/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 23:26:31 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/03 23:26:33 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((j > i && i > k) || (k > i && i > j))
		return (i);
	if ((i > j && j > k) || (k > j && j > i))
		return (j);
	if ((i > k && j > k) || (j > k && k > i))
		return (k);
	else
		return (0);
}