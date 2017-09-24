/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 14:44:22 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/31 14:44:23 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	if (*str == '\0')
		return (0);
	else if (*to_find == '\0')
		return (str);
	else if ((*str == *to_find) && (ft_strstr(str + 1, to_find + 1) == str + 1))
		return (str);
	else
		return (ft_strstr(str + 1, to_find));
}
