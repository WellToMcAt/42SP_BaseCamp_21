/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_sudoku.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:49:32 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:49:44 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_VALID_SUDOKU_H
# define FT_VALID_SUDOKU_H
# include "ft_define.h"

int		is_row_valid(int board[9][9], int row, int guess);
int		is_column_valid(int board[9][9], int col, int guess);
int		is_box_valid(int board[9][9], int row, int col, int guess);
int		is_guess_valid(int b[9][9], int row, int col, int guess);

#endif
