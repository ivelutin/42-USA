/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:46:15 by ivelutin          #+#    #+#             */
/*   Updated: 2017/01/18 16:46:17 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int		t;

	t = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			if (*(s + 1) == c || !(*(s + 1)))
				t++;
			s++;
		}
	}
	return (t);
}
