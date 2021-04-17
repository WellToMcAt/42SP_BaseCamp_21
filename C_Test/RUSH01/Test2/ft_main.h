/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:44:26 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:44:45 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAIN_H
# define FT_MAIN_H
# include "ft_define.h"
# include "ft_valid_sudoku.h"
# include "ft_parsing.h"
# include "ft_imperative_sudoku.h"
# include "ft_backtrack.h"

int		main(int ac, char **av);
void	ft_initialize(int b[9][9], int s[9][9], int m[9][9][10]);

#endif
