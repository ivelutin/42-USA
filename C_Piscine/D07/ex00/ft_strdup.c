/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:04:46 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/02 11:04:48 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*cpy;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	cpy = malloc(i + 1);
	if (cpy != ('\0'))
	{
		while (src[j])
		{
			cpy[j] = src[j];
			j++;
			cpy[j] = '\0';
		}
		return (cpy);
	}
	return (0);
}
