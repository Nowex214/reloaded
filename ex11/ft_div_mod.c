/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:43:13 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 10:34:55 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
    int a = 10;
    int b = 3;
    int division, remainder;

    ft_div_mod(a, b, &division, &remainder);

    printf("Division: %d, Modulo: %d\n", division, remainder);

    return 0;
}
*/