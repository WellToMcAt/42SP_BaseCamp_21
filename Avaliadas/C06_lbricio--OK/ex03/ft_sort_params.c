/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:53:55 by lbricio-          #+#    #+#             */
/*   Updated: 2021/04/16 15:44:54 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(const char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		write(1, &str[c], 1);
		c++;
	}
	write(1, "\n", 1);
}

int		ft_strcmp(const char *s1, const char *s2)
{
	int c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0') && (s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_swap(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int		main(int argc, const char **argv)
{
	int qt;
	int x;
	int y;
	int arg[argc];

	qt = 1;
	x = 1;
	while (qt < argc)
	{
		arg[qt] = qt;
		qt++;
	}
	while (x < argc)
	{
		y = x;
		while (y < argc)
		{
			if (ft_strcmp(argv[arg[x]], argv[arg[y]]) > 0)
				ft_swap(&arg[x], &arg[y]);
			y++;
		}
		ft_putstr(argv[arg[x++]]);
	}
	return (0);
}
