/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:03:04 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/16 21:04:21 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int size_dest;
	int conta;

	size_dest = 0;
	conta = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (src[conta] != '\0')
	{
		dest[size_dest] = src[conta];
		conta++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
