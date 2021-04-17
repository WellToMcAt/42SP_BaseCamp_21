/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 18:33:04 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/15 18:49:44 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_an(int a)
{
	if ((a > 47 && a < 58) || (a > 64 && a < 91) || (a > 96 && a < 123))
	{
		return (1);
	}
	return (0);
}

int		ft_is_lt(int b)
{
	if ((b > 64 && b < 91) || (b > 96 && b < 123))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((c == 0) || (ft_is_lt(str[c]) == 1 && ft_is_an(str[c - 1]) == 0))
		{
			if (str[c] > 96 && str[c] < 123)
			{
				str[c] = str[c] - 32;
			}
		}
		else if (str[c] > 64 && str[c] < 91)
		{
			str[c] = str[c] + 32;
		}
		c++;
	}
	return (str);
}
