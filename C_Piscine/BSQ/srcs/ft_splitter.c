/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 21:28:08 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/15 01:55:21 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_wc(char *str)
{
	int		i;
	int		sp;
	int		count;

	i = 0;
	sp = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\n' && str[i])
		{
			i++;
			sp = 1;
		}
		if (str[i] == '\n' || str[i] == '\0')
		{
			count += (sp == 1);
			sp = 0;
			i++;
		}
	}
	return (count);
}

int		ft_cc(char *str, int i)
{
	int	len;

	len = 0;
	while (str[i] != '\n' && str[i])
	{
		len++;
		i++;
	}
	return (len + 1);
}

char	**ft_splitter(char *str, int j)
{
	char	**ret;
	int		i;
	int		k;

	i = ft_cc(str, 0);
	if ((ret = malloc(sizeof(char*) * ft_wc(str))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((ret[j] = malloc(sizeof(char) * ft_cc(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\n' && str[i])
				ret[j][k++] = str[i++];
			ret[j][k] = '\n';
			ret[j++][k + 1] = '\0';
		}
	}
	ret[j] = NULL;
	return (ret);
}
