/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:08:38 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/16 21:09:03 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	int				size_dest;
	unsigned int	cont;

	size_dest = 0;
	cont = 0;
	while (dest[size_dest] != '\0')
	{
		size_dest++;
	}
	while (cont < n && src[cont] != '\0')
	{
		dest[size_dest] = src[cont];
		cont++;
		size_dest++;
	}
	dest[size_dest] = '\0';
	return (dest);
}
