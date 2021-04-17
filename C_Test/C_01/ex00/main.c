/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 16:53:02 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/14 20:53:06 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr);

int		main(void)
{
	int a;
	int pt;

	a = 0;
	pt = a;
	ft_ft(&pt);
	printf("retorno do ponteiro : %i\n", pt);
}
