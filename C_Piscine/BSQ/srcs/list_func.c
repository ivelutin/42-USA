/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 20:53:48 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/14 21:22:44 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

t_list		*ft_create_elem(char data)
{
	t_list	*tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->data = data;
		tmp->next = NULL;
	}
	return (tmp);
}

void		ft_push_back(t_list **begin_list, char data)
{
	t_list	*list_pointer;

	if (*begin_list == NULL)
	{
		*begin_list = ft_create_elem(data);
		return ;
	}
	list_pointer = *begin_list;
	while (list_pointer->next)
		list_pointer = list_pointer->next;
	list_pointer->next = ft_create_elem(data);
}

int			ft_list_size(t_list *begin_list)
{
	if (begin_list == NULL)
		return (0);
	return (1 + ft_list_size(begin_list->next));
}

char		*list_to_string(t_list *l_done)
{
	char	*str;
	int		i;
	int		length;
	t_list	*temp;

	temp = l_done;
	i = 0;
	length = ft_list_size(l_done);
	str = (char*)malloc(sizeof(char) * (length + 1));
	while (i < length)
	{
		str[i] = temp->data;
		temp = temp->next;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char		*ft_read(int fd)
{
	int		ret;
	char	m;
	char	*str;
	char	buf[2];
	t_list	*new;

	new = NULL;
	while ((ret = read(fd, buf, 1)))
	{
		buf[1] = '\0';
		m = buf[0];
		ft_push_back(&new, m);
	}
	str = list_to_string(new);
	return (str);
}
