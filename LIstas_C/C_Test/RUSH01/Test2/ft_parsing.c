/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:45:08 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:45:28 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_parsing.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puterr(void)
{
	write(1, "Error\n", 6);
}

int		is_invalid_input(int ac, char **av)
{
	int row;
	int col;
	int count;

	count = 0;
	if (ac != 10)
		return (TRUE);
	row = 1;
	while (row < ac)
	{
		col = 0;
		while (col < 9)
		{
			if (!(av[row][col] == '.'
				|| ('1' <= av[row][col] && av[row][col] <= '9')))
				return (TRUE);
			count += av[row][col] == '.' ? 0 : 1;
			col++;
		}
		if (av[row][col] != '\0')
			return (TRUE);
		row++;
	}
	return (count < 17 ? TRUE : FALSE);
}

void	ft_create_board(int ac, char **av, int board[9][9])
{
	int col;
	int row;

	row = 1;
	while (row < ac)
	{
		col = 0;
		while (col < 9)
		{
			if (av[row][col] == '.')
				board[row - 1][col] = 0;
			else
				board[row - 1][col] = av[row][col] - '0';
			col++;
		}
		row++;
	}
}

void	print_board(int board[9][9])
{
	int col;
	int row;

	col = 0;
	while (col < 9)
	{
		row = 0;
		while (row < 9)
		{
			ft_putchar(board[col][row] + '0');
			if (row < 8)
				ft_putchar(' ');
			row++;
		}
		ft_putchar('\n');
		col++;
	}
}
