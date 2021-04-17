/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aloi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:49:40 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/17 01:29:11 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		count_negatives(char *str, int counter);
int		count_spaces(char *str, int counter);

int		ft_atoi(char *str)
{
	int result;
	int is_negative;
	int counter;

	result = 0;
	is_negative = 1;
	counter = 0;
	counter = count_spaces(str, counter);
	counter = count_negatives(str, counter);
	if (counter < 0)
	{
		counter = counter * -1;
		is_negative = -1;
	}
	while ((str[counter] != '\0') &&
	(str[counter] >= 48) && (str[counter] <= 57))
	{
		result = (result * 10) + (str[counter] - '0');
		counter++;
	}
	return (is_negative * result);
}

int		count_spaces(char *str, int counter)
{
	while ((str[counter] == '\t') || (str[counter] == '\v') ||
	(str[counter] == '\f') || (str[counter] == '\r') ||
	(str[counter] == '\n') || (str[counter] == ' '))
	{
		counter++;
	}
	return (counter);
}

int		count_negatives(char *str, int counter)
{
	int negcounter;

	negcounter = 1;
	while ((str[counter] == '+') || (str[counter] == '-'))
	{
		if (str[counter] == '-')
		{
			negcounter = negcounter * -1;
		}
		counter++;
	}
	return (counter * negcounter);
}
