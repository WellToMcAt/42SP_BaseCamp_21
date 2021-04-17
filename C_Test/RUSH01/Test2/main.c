/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:43:39 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:43:53 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_main.h"

int		main(int ac, char **av)
{
	int	solutions;
	int	board[9][9];
	int	solved_board[9][9];
	int	matrix[9][9][10];

	solutions = 0;
	ft_initialize(board, solved_board, matrix);
	if (is_invalid_input(ac, av))
	{
		ft_puterr();
		return (0);
	}
	ft_create_board(ac, av, board);
	ft_imperative_sudoku(board, matrix);
	ft_backtrack(board, solved_board, matrix, &solutions);
	if (solutions == 1)
		print_board(solved_board);
	else
		ft_puterr();
	return (0);
}

void	ft_initialize(int b[9][9], int s[9][9], int m[9][9][10])
{
	int row;
	int col;
	int number;

	row = 0;
	while (row < 9)
	{
		col = 0;
		while (col < 9)
		{
			b[row][col] = 0;
			s[row][col] = 0;
			number = -1;
			while (++number <= 9)
			{
				m[row][col][number] = 0;
			}
			col++;
		}
		row++;
	}
}
