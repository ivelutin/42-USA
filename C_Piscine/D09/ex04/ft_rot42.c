/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 21:43:42 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/03 21:43:44 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_rot42(char *str)
{
	int		i;
	char	*x;

	i = 0;
	x = str;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'J')
			sttr[i] += 16;
		else if (str[i] >= 'K' && str[i] <= 'Z')
			str[i] -= 10;
		else if (str[i] >= 'a' && str[i] <= 'j')
			str[i] += 16;
		else if (str[i] >= 'k' && str[i] <= 'z')
			str[i] -= 10;
		i++;
	}
	return (str);
}
