/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:16:09 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 10:59:09 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*swap;

	swap = *s1;
	*s1 = *s2;
	*s2 = swap;
}

void	ft_sort_tab(char **av, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			ft_swap(&av[i], &av[i + 1]);
			i = 0;
		}
		else
		{
			i++;
		}
	}
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac <= 1)
		return (1);
	ft_sort_tab(&av[1], ac - 1);
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar ('\n');
		i++;
	}
	return (0);
}
