/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   towerdoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 00:30:20 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/12 05:05:17 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOWERDOKU_H

# define TOWERDOKU_H
# define SIZE 4

typedef struct s_params
{
	char	up[SIZE];
	char	down[SIZE];
	char	left[SIZE];
	char	right[SIZE];
}						t_params;
int		arg_is_valid(char *av, t_params *params);
int		resolve(char grid[SIZE][SIZE], t_params *params);
int		search_empty_case(char grid[SIZE][SIZE], int *x, int *y);
int		can_put_value(char grid[SIZE][SIZE], int x, int y, int value);
int 	line_is_valid(char grid[SIZE][SIZE], t_params *params, int y);
int		colunm_is_valid(char grid[SIZE][SIZE], t_params *params, int x);
int		calculate_views(char grid[SIZE][SIZE],int pos);
int		print_grid(char gris[SIZE][SIZE]);

#endif
