/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 19:45:29 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/15 19:45:33 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
	{
		srcsize++;
	}
	if (size > 0)
	{
		c = 0;
		while (c < (size - 1) && src[c] != '\0')
		{
			dest[c] = src[c];
			c++;
		}
		dest[c] = '\0';
	}
	return (srcsize);
}
