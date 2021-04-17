/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_function.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:47:36 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:47:40 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SEARCH_FUNCTION_H
# define FT_SEARCH_FUNCTION_H
# include "ft_define.h"
# include "ft_imperative_sudoku.h"

void	ft_cell(int b[9][9], int m[9][9][10], int *updated);
void	ft_row(int b[9][9], int m[9][9][10], int number, int *updated);
void	ft_col(int b[9][9], int m[9][9][10], int number, int *updated);
void	ft_box(int b[9][9], int m[9][9][10], int number, int *updated);

#endif
