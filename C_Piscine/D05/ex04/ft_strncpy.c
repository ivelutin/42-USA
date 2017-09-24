/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:53:33 by ivelutin          #+#    #+#             */
/*   Updated: 2016/10/31 13:53:36 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	while (src[i])
		i++;
	dest[n] = '\0';
	return (dest);
}
