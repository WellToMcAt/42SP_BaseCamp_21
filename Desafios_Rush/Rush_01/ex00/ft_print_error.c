/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoares- <rsoares-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 22:44:05 by rsoares-          #+#    #+#             */
/*   Updated: 2021/04/12 01:47:26 by rsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(char *mat)
{
	int lin;

	lin = 0;
	while(lin <= 3)
	{
		if(mat[lin] <= 48 || mat[lin] > 52)
			{
				write(1, "ERRO: número não permitido", 26);
			}
		lin++;
	}
}
