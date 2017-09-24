/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 18:45:34 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/03 18:45:36 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int		s;
	int		e;
	char	*am;
	char	*pm;
	char	*me;

	s = hour;
	e = hour;
	me = "THE FOLLOWING TAKES PLACE BEETWEEN";
	am = "A.M.";
	pm = "P.M.";
	if (s < 11)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s, am, e + 1, am);
	if (s >= 13 && s <= 22)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s - 12, pm, (e + 1) - 12, pm);
	if (s == 24)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s - 24, am, e - 23, am);
	if (s == 12)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s, pm, e - 11, pm);
	if (s == 11)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s, am, e + 1, pm);
	if (s == 23)
		printf("%s %d.00 %s AND %d.00 %s\n", me, s - 12, pm, e - 11, am);
}
