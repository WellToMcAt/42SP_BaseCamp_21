/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 23:39:45 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/08 23:39:47 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_shorter_array(int arr[], int n)
{
	int	i;
	int	is_shorter;

	i = 0;
	is_shorter = 1;
	while (i < n - 1)
	{
		if (arr[i] >= arr[i + 1])
			is_shorter = 0;
		i++;
	}
	if (is_shorter)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(arr[i]);
			i++;
		}
		if (arr[0] != '9' - n + 1)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_array(int arr[], int i, int n)
{
	if (i == n - 1)
	{
		arr[i] = '0';
		while (arr[i] <= '9')
		{
			if (n == 9 && arr[0] > '1')
				break ;
			ft_print_shorter_array(arr, n);
			arr[i]++;
		}
	}
	else
	{
		arr[i] = '0';
		while (arr[i] <= '9')
		{
			ft_print_array(arr, i + 1, n);
			arr[i]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[n];
	int	i;

	i = 0;
	ft_print_array(arr, i, n);
}
