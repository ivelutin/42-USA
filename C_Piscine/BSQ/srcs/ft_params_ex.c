/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_params_ex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 02:04:30 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/15 13:41:38 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_line_num(char *str)
{
	return (ft_atoi(str));
}

char	ft_empty(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	j = str[i];
	return (j);
}

char	ft_obstacle(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	j = str[i + 1];
	return (j);
}

char	ft_full(char *str)
{
	int		i;
	char	j;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	j = str[i + 2];
	return (j);
}
