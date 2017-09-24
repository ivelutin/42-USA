/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:45:14 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/08 13:45:17 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp != '\0')
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}
