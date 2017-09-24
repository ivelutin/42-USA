/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eurodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 03:27:08 by eurodrig          #+#    #+#             */
/*   Updated: 2016/11/16 17:43:24 by eurodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_list
{
	struct s_list	*next;
	char			data;
}				t_list;

typedef struct	s_max
{
	int				i;
	int				j;
	int				max;
}				t_max;

typedef struct	s_point
{
	int				i;
	int				j;
}				t_point;

typedef struct	s_check
{
	char			empty;
	char			obstacle;
	char			full;
	int				valid;
}				t_check;

void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int n);
void			ft_putstr_e(char *str);
int				ft_atoi(const char *str);
char			*ft_read(int fd);
t_list			*ft_create_elem(char data);
void			ft_push_back(t_list **begin_list, char data);
int				ft_list_size(t_list *begin_list);
char			*list_to_string(t_list *l_done);
int				ft_wc(char *str);
int				ft_cc(char *str, int i);
char			**ft_splitter(char *str, int j);
int				ft_line_num(char *str);
char			ft_empty(char	*str);
char			ft_obstacle(char *str);
char			ft_full(char *str);
int				ft_first_check(char *str, t_point ij);
t_check			ft_valid(char *str, char **matrix, int i, int k);
int				ft_valid_map(char **str, int l_num, char empty, char full);
void			ft_solver(char **matrix, t_point ij, t_check params);
int				**n_mtx_malloc(char **matrix);
void			ft_values(int **n_mtx, char **matrix, t_point ij, char obs);
int				ft_min(int a, int b, int c);
void			ft_sqr(int **n_mtx, t_max max, t_check params);
int				main();
int				ft_trampa(char *str, t_point ij, char **matrix, t_point iline);
int				ft_loco(t_point ij);
int				ft_vamuu(t_point ij, int argc, char **argv);
#endif
