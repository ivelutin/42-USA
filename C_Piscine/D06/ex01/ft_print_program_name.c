/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 17:49:21 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/01 17:49:24 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char *argv[])
{
	argc = 0;
	while (*argv[0])
	{
		ft_putchar(*argv[0]);
		argv[0] += 1;
	}
	ft_putchar('\n');
	return (0);
}
