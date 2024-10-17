/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 11:48:08 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 14:07:14 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
/*
void    ft_putnbr(int nb)
{
    printf("%d\n", nb);
}

int main(void)
{
    int tab[] = {1, 2, 3, 4, 5};
    ft_foreach(tab, 5, &ft_putnbr);
    return (0);
}
*/
