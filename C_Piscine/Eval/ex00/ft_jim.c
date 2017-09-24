/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jim.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 16:56:26 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/12 16:56:28 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_calc.h"

int	eval_expr(char *str)
{
	return (ft_sum(&str));
}

int	ft_op(char **str)
{
	int		num;
	int		num2;
	char	op;

	num = ft_paren(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '*' && op != '/' && op != '%')
			return (num);
		(*str)++;
		num2 = ft_paren(str);
		if (op == '/')
			num /= num2;
		else if (op == '*')
			num *= num2;
		else
			num %= num2;
	}
	return (num);
}

int	ft_paren(char **str)
{
	int num;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		num = ft_sum(str);
		if (**str == ')')
			(*str)++;
		return (num);
	}
	return (ft_atoi(str));
}

int	ft_sum(char **str)
{
	int		num;
	int		num2;
	char	op;

	num = ft_op(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		op = **str;
		if (op != '+' && op != '-')
			return (num);
		(*str)++;
		num2 = ft_op(str);
		if (op == '+')
			num += num2;
		else
			num -= num2;
	}
	return (num);
}
