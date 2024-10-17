/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student42.luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:16:09 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/15 18:38:36 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	ft_sort_tab(char **av, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], av[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac <= 1)
		return (1);
	ft_sort_tab (&av[i], ac - 1);
	while (i < ac)
	{
		while (av[i][j])
		{
			ft_putchar (av[i][j]);
			j++;
		}
		ft_putchar ("\n");
		i++;
	}
	return (0);
}
