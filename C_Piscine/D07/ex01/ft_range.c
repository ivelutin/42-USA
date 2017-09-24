/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 11:05:07 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/02 11:05:09 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int i;
	int *int_array;

	i = 0;
	if (max > min)
	{
		int_array = (int*)malloc(sizeof(*int_array) * (max - min));
		while (min < max)
		{
			int_array[i] = min;
			min += 1;
			i += 1;
		}
		return (int_array);
	}
	return (0);
}

int        main(void)
{
   int *t;
   int i;

   i = 0;
   t = ft_range(4, 19);
   while(t[i] != '\0')
       i++;
   printf("%d", i);
   return (0);
}
