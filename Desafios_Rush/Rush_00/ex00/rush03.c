/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lhenriqu <lhenriqu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 18:04:34 by lhenriqu          #+#    #+#             */
/*   Updated: 2021/04/04 22:56:30 by lhenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	firstlastline(int x, int y, int b, int a)
{
	if (y == b)
	{
		if (x == a)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
	else if (y == 1)
	{
		if (x == a)
			ft_putchar('A');
		else if (x == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
	}
}

void	midlines(int x, int a)
{
	if (x == a || x == 1)
	{
		ft_putchar('B');
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
