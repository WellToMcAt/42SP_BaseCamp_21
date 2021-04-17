/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 16:14:48 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/16 21:52:33 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int        ft_strncmp(char *s1, char *s2, unsigned int n);

int        main(void)
{
    char *s1;
    char *s2;
    unsigned int n;

    s1 = "ab";
    s2 = "a";
    n = 6;
    printf("Minha função: %i\n", ft_strncmp(s1, s2, n));
    printf("Função original: %i\n", strncmp(s1, s2, n));

    return (0);
}
