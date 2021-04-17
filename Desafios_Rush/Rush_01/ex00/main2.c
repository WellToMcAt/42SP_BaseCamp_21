/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:43:49 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/12 01:45:45 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(char mat);

int		main()
{
	char	outside[16] = { '2', '2', '1', '4', '2', '2', '4', '1', '3', '1', '2', '2', '2', '3', '2', '1' };
	char	map[4][4] = { { '0', '0', '0', '0' }, { '0', '0', '0', '0' }, { '0', '0', '0', '0' }, { '0', '0', '0', '0' }};
	char	a;
	int		c;
	int		d;
	int		e;
	char	f;

	c = 0;
	while (c < 16)
	{
		if (outside[c] == '4')
		{
			if (c <= 3)
			{
				e = 0;
				while (e <=3)
				{
					map[e][c] = e + 1 + '0';
					e++;
				}
			}
			if (c >= 4 && c <= 7)
			{
				d = 0;
				e = 3;
				while (e >= 0)
				{
					map[e][c - 4] = d + 1 + '0';
					d++;
					e--;
				}
			}
			if (c >= 8 && c <= 11)
			{
				e = 0;
				while (e <= 3)
				{
					map[c - 8][e] = e + 1 + '0';
					e++;
				}
			}
			if (c > 11)
			{
				e = 3;
				while (e >= 0)
				{
					map[e][c - 12] = d + 1 + '0';
					d++;
					e--;
				}
			}
		}
		c++;
	}
	c = 0;
	while (c < 16)
	{
		if (outside[c] == '1')
		{
			if (c <= 3)
			{
				map[0][c] = '4';
			}
			if (c >= 4 && c <= 7)
			{
				map[3][c-4] = '4';
			}
			if (c >= 8 && c <= 11)
			{
				map[c - 8][0] = '4';
			}
			if (c > 11)
			{
				map[c - 12][3] = '4';
			}
		}
		c++;
	}
	c = 0;
	while (c < 4)
	{
		d = 0;
		e = 0;
		f = 0;
		while (d < 4)
		{
			if (map[c][d] != '0')
			{
				f = f + map[c][d];
				e++;
			}
			d++;
		}
		if (e == 3)
		{
			d = 0;
			while (d < 4)
			{
				if (map[c][d] == '0')
				{
					map[c][d] = '9' - f;
				}
				d++;
			}
		}
		c++;
	}
	c = 0;
	while (c < 4)
	{
		d = 0;
		while (d < 4)
		{
			a = map[c][d];
			write(1, &a, 1);
			d++;
		}
		write(1, "\n", 1);
		c++;
	}
}
