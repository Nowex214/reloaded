/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 11:11:30 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 10:34:54 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int x = 5;
	int y = 10;

	printf("avant: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("après: x = %d, y = %d\n", x, y);
	return (0);
}
*/