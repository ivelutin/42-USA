/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:24:04 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/09 15:24:06 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int			ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*list;

	i = 0;
	while (list)
	{
		i++;
		begin_list->next;
	}
	return (i);
}
