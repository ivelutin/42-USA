/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 15:43:43 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/09 15:43:46 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_list.h"

t_list *ft_list_last(t_list *begin_list)
{
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}
