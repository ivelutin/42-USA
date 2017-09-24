/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 18:47:59 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/01 18:48:01 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = argc - 1;
	while (--argc)
	{
		while (argv[j][i])
		{
			ft_putchar(argv[j][i]);
			i += 1;
		}
		i = 0;
		j -= 1;
		ft_putchar('\n');
	}
	return (0);
}
