/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:52:23 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 11:05:50 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	size;

	if (min >= max)
		return (0);
	size = max - min;
	res = (int *)malloc(sizeof(int) * (size));
	if (res == NULL)
		return (NULL);
	size = 0;
	while (min < max)
	{
		res[size] = min;
		min++;
		size++;
	}
	return (res);
}
/*
int	main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i;
	int	size;

	i = 0;
	min = 7;
	max = 14;
	size = max - min;
	tab = ft_range(min, max);
	while (size > i)
	{
		printf("output: %d\n", tab[i]);
		i++;
	}
	return (0);
}
*/