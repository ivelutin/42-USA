/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <ivelutin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/04 16:47:07 by ivelutin          #+#    #+#             */
/*   Updated: 2017/06/13 15:10:39 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "../includes/ft_printf.h"

int			ft_ccs(va_list sos, t_alpha *vz)
{
	char	*tmp;

	tmp = 0;
	tmp = "sSpdioOuUxXcC";
	while(*tmp)
	{
		if(*tmp == vz->c)
			ft_conv(sos, vz);
		tmp++;
	}
	return(0);
}

void		ft_catch(const char **form, va_list sos, t_alpha *vz)
{
	while (**form)
	{
		if (check_flag(**form))
		{
			vz->flag = **form;
			ft_flags(vz);
			*form += 1;
		}
		if (ft_isdigit(**form) || **form == '.')
			check_widpre(form, vz);
		if (ft_isalpha(**form))
		{
			check_mod(form, vz);
			vz->c = **form;
			ft_ccs(sos, vz);
			break ;
		}
		*form += 1;
	}
}

int			ft_printf(const char *form, ...)
{
	t_alpha	*vz;
	va_list	sos;

	if (!(vz = (t_alpha*)ft_memalloc(sizeof(t_alpha))))
		return (0);
	va_start(sos, form);
	while (*form)
	{
		if (*form == '%')
		{
			form += 1;
			ft_catch(&form, sos, vz);
		}
		else
			ft_putchar(*form);
		form++;
	}
	va_end(sos);
	return (0);
}

int main()
{
// 	wchar_t wc = 0x0058;     /* UNICODE X */
// wchar_t ws[4];
// setlocale(LC_ALL,
//  "/QSYS.LIB/EN_US.LOCALE"); /* a CCSID 37 locale */
// ws[0] = 0x0041;        /* UNICODE A   */
// ws[1] = (wchar_t)0x0042;        /* UNICODE B   */
// ws[2] = (wchar_t)0x0043;        /* UNICODE C   */
// ws[3] = (wchar_t)0x0000;
// /* The output displayed is CCSID 37  */
// /* Now let's try a mixed-byte CCSID example  */
// /* You would need a device that can handle mixed bytes to  */
// /* display this correctly.                         */
// ft_printf("Se puede?\n%ls\n",ws);
// setlocale(LC_ALL,
// "/QSYS.LIB/JA_JP.LOCALE");/* a CCSID 5026 locale */
//
// /* big A means an A that takes up 2 bytes on the screen   */
// /* It will look bigger then single byte A                 */
// ws[0] = (wchar_t)0xFF21;        /* UNICODE big A   */
// ws[1] = (wchar_t)0xFF22;        /* UNICODE big B   */
// ws[2] = (wchar_t)0xFF23;        /* UNICODE big C   */
// ws[3] = (wchar_t)0x0000;
// wc = 0xff11;                    /* UNICODE big 1   */
wchar_t m1[] = L"Hello World";
// wchar_t m2[42] = L"Hello World";
// wchar_t * pm = L"Hello World";
	ft_printf("Se puede?\n%ls\n",m1);
	printf("%ls\n", m1);
	ft_printf("Tu que dices?\n%.16s\n", "seh");
	return (0);
}
