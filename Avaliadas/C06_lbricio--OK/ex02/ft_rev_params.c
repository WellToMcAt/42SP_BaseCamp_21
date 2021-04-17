/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbricio- <lbricio-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 23:52:54 by lbricio-          #+#    #+#             */
/*   Updated: 2021/04/16 15:44:05 by lbricio-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int x;
	int y;

	x = argc - 1;
	y = 0;
	if (argc > 1)
	{
		while (x > 0)
		{
			y = 0;
			while (argv[x][y] != '\0')
			{
				write(1, &argv[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x--;
		}
	}
	return (0);
}
