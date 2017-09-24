/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivelutin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 23:18:52 by ivelutin          #+#    #+#             */
/*   Updated: 2016/11/09 23:18:54 by ivelutin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INC_H
# define FT_INC_H

# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

# define BUF_SIZE 32
# define INVALID_ARG "Invalid parameters.\n"

char						*g_progname;
const char					*ft_strerror(int errnum);
void						ft_putchar(char c);
void						ft_putstr(const char *str);
int							ft_print_custom_error(int eno, char *argv);
#endif
