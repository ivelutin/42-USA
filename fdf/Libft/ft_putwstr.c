/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 04:42:23 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/13 15:12:17 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putwstr(wchar_t const *ws)
{
	while(*ws)
	{
		ft_putwchar(*ws);
		ws++;
	}
}
