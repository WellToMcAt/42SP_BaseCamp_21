/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:12:22 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/16 21:15:13 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int conta;
	int conta2;

	conta = 0;
	if (to_find[conta] == '\0')
		return (str);
	while (str[conta] != '\0')
	{
		conta2 = 0;
		while (str[conta + conta2] == to_find[conta2])
		{
			conta2++;
			if (to_find[conta2] == '\0')
				return (&str[conta]);
		}
		conta++;
	}
	return (0);
}
