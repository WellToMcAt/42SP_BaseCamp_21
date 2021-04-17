/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 23:38:06 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/04 23:42:45 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstlastline(int x, int y, int b, int a)
{
	if (y == b)
	{
		if (x == a)
			ft_putchar('/');
		else if (x == 1)
			ft_putchar(92);
		else
			ft_putchar('*');
	}
	else if (y == 1)
	{
		if (x == a)
			ft_putchar(92);
		else if (x == 1)
			ft_putchar('/');
		else
			ft_putchar('*');
	}
}

void	midlines(int x, int a)
{
	if (x == a || x == 1)
	{
		ft_putchar('*');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int a;
	int b;

	a = x;
	b = y;
	while (y >= 1)
	{
		x = a;
		while (x >= 1)
		{
			if (y == b || y == 1)
			{
				firstlastline(x, y, b, a);
			}
			else
			{
				midlines(x, a);
			}
			x--;
		}
		ft_putchar(10);
		y--;
	}
}
