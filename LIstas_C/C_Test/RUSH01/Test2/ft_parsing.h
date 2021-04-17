/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:46:08 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:46:11 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSING_H
# define FT_PARSING_H
# include <unistd.h>
# include "ft_define.h"

void	ft_putchar(char c);
void	ft_puterr(void);
int		is_invalid_input(int ac, char **av);
void	ft_create_board(int ac, char **av, int board[9][9]);
void	print_board(int board[9][9]);

#endif
