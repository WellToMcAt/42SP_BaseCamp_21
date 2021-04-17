/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wde-jesu <wde-jesu@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 19:29:45 by wde-jesu          #+#    #+#             */
/*   Updated: 2021/04/16 21:54:13 by wde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int        ft_strcmp(char *s1, char *s2);

int        main(void)
{
    char *s1;
    char *s2;

    s1 = "ab";
    s2 = "ab";
    printf("Minha função: %i\n", ft_strcmp(s1, s2));
    printf("Função original: %i\n", strcmp(s1, s2));

    return (0);
}
