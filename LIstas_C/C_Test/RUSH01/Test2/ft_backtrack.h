/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:40:37 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:40:53 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BACKTRACK_H
# define FT_BACKTRACK_H
# include "ft_define.h"
# include "ft_valid_sudoku.h"

int		next_empty_cell(int board[9][9]);
void	copy_board(int src[9][9], int dst[9][9]);
int		ft_backtrack(int b[9][9], int s[9][9], int m[9][9][10], int *solution);

#endif
