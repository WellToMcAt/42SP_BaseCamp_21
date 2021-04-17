/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 05:14:02 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/17 05:20:05 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int fatorial;

	fatorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		while (nb > 0)
		{
			fatorial *= nb;
			nb--;
		}
	}
	return (fatorial);
}
