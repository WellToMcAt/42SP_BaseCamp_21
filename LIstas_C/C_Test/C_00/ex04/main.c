/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 04:10:47 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/08 04:34:06 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_is_negative(int n);

int n;

int main(void)
{
	printf("Introduza um número + ou - valido\n");
	scanf("%d",&n);
	ft_is_negative(n); // main ex04
	printf ("\n");
	return (0);
}
