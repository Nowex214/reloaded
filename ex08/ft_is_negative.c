/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:54:59 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 11:12:10 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar ('N');
	else
		ft_putchar ('P');
}
/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(0);
	ft_is_negative(42);
	return (0);
}
*/
