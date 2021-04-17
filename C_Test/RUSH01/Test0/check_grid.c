/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 01:41:07 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/12 04:47:54 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "towerdoku.h"

int	column_is_valid(char grid[SIZE][SIZE], t_params *params, int x)
{
	int	i;
	int	max_size;
	int	views;

	max_size = 0;
	views = 0;
	i = -1;
	while(++i < SIZE)
	{
		views += grid[i][x] > max_size;
		max_size = ((grid[i][x]>max_size) ? grid[i][x] : max_size);
	}
	if (views != params->up[x])
		return (0);
	max_size = 0;
	views = 0;
	while (--i >= 0)
	{
		views += grid[i][x] > max_size;
		max_size = ((grid[i][x] > max_size) ? grid[i][x] : max_size);
	}
	if (views != params->down[x])
		return (0);
	return (1);
}
int	line_is_valid(char grid[SIZE][SIZE], t_params *params, int y)
{
	int	i;
	int	max_size;
	int views;
	
	max_size = 0;
	views = 0;
	i = -1;
	while(++i < SIZE)
	{
		views += grid[y][i] > max_size;
		max_size =((grid[y][i] > max_size) ? grid[y][i] : max_size);
	}
	if (views != params->left[y])
		return (0);
	max_size = 0;
	views = 0;
	while(--i >= 0)
	{
		views += grid[y][i] > max_size;
		max_size =((grid[y][i] > max_size) ? grid[y][i] : max_size);
	}
	if (views != params->right[y])
		return (0);
	return (1);
}

int	can_put_value(char grid[SIZE][SIZE], int x, int y, int value)
{
	int	i;
	i = -1;
	while (++i < SIZE)
		if(grid[y][i] == value || grid[i][x] == value)
			return (0);
	return (1);
}

int	search_empty_case(char grid[SIZE][SIZE], int *x, int *y)
{
	int	i;
	int	j;
	
	i = -1;
	while (++i < SIZE)
	{
		j = -1;
		while(++j < SIZE)
			if(grid[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (1);
			}
		return (0);
	}
}	
