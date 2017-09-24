/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 18:24:27 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/31 18:24:29 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int		proof;
	int		i;

	i = 0;
	proof = 0;
	if (str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			proof++;
		i++;
	}
	if (proof == 0)
		return (1);
	else
		return (0);
	return (0);
}
