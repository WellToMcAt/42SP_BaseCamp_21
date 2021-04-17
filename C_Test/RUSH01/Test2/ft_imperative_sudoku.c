/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_imperative_sudoku.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:42:22 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:42:26 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_imperative_sudoku.h"

void	ft_imperative_sudoku(int board[9][9], int matrix[9][9][10])
{
	int	updated;
	int	number;

	ft_updated_board(board, matrix);
	updated = TRUE;
	while (updated)
	{
		updated = FALSE;
		ft_cell(board, matrix, &updated);
		number = 1;
		while (number <= 9)
		{
			ft_box(board, matrix, number, &updated);
			ft_row(board, matrix, number, &updated);
			ft_col(board, matrix, number, &updated);
			number++;
		}
	}
}

void	ft_update(int board[9][9], int matrix[9][9][10], int row, int col)
{
	int	i;
	int	number;

	i = -1;
	number = board[row][col];
	matrix[row][col][0] = 9;
	while (++i < 9)
	{
		matrix[row][col][i + 1] = NOT_POSSIBLE;
		if (matrix[row][i][number] == POSSIBLE)
		{
			matrix[row][i][number] = NOT_POSSIBLE;
			matrix[row][i][0]++;
		}
		if (matrix[i][col][number] == POSSIBLE)
		{
			matrix[i][col][number] = NOT_POSSIBLE;
			matrix[i][col][0]++;
		}
		if (matrix[ROW(i, row)][COL(i, col)][number] == POSSIBLE)
		{
			matrix[ROW(i, row)][COL(i, col)][number] = NOT_POSSIBLE;
			matrix[ROW(i, row)][COL(i, col)][0]++;
		}
	}
}

void	ft_updated_board(int board[9][9], int matrix[9][9][10])
{
	int	row;
	int	col;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			if (board[row][col] != 0)
				ft_update(board, matrix, row, col);
			col++;
		}
		row++;
	}
}
