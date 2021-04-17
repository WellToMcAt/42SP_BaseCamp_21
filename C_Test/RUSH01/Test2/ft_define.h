/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_define.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:41:28 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/11 22:41:42 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFINE_H
# define FT_DEFINE_H

# define POSSIBLE 0
# define NOT_POSSIBLE 1
# define TRUE 1
# define FALSE 0
# define SOLVED -1
# define STOP 1
# define NEXT 0
# define SHOW(X) matrix[row][col][X] == 0 ? X + '0' : ' '
# define ROW(X, Y) ((Y / 3) * 3 + X / 3)
# define COL(X, Y) ((Y / 3) * 3 + X % 3)
# define BOXR(X, Y) ((X / 3) * 3 + Y / 3)
# define BOXC(X, Y) ((X % 3) * 3 + Y % 3)

#endif
