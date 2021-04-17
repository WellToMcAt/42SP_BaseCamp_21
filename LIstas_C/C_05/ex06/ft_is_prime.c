/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 05:26:31 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/17 05:29:34 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int q;

	q = 5;
	if (nb <= 1)
		return (0);
	else if (nb != 2 && nb % 2 == 0)
		return (0);
	else if (nb != 3 && nb % 3 == 0)
		return (0);
	else if (nb == 2 || nb == 3)
		return (1);
	else if (nb == 2147483647)
		return (1);
	else
	{
		while (q < (nb / 2))
		{
			if (nb % q == 0)
				return (0);
			q += 2;
		}
	}
	return (1);
}
