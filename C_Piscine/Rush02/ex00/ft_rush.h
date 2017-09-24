 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rush.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:24:08 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/12 20:24:10 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALC_H
# define FT_CALC_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_rush(char *rush, int *xy, int i, int num_rushes);
void	rush00(int w, int h);
void	rush01(int w, int h);
void	rush02(int w, int h);
void	rush03(int w, int h);
void	rush04(int w, int h);

#endif
