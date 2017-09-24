/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 17:34:49 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/12 17:34:51 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CALC_H
# define FT_CALC_H

void	ft_putchar(char c);
int		ft_putnbr(int n);
int		ft_atoi(char **str);
int		ft_paren(char **str);
int		ft_op(char **str);
int		ft_sum(char **str);
int		eval_expr(char *str);

#endif
