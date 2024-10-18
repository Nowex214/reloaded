/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 13:03:03 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/18 14:05:56 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;
	int	len;

	len = 0;
	i = 0;
	count = 0;
	while (tab[len])
		len++;
	while (i < len)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
/*
int ft_its_a(char *str)
{
    return (str[0] == 'a');
}

int main(void)
{
    char *tab[] = {
        "apple",
        "banana",
        "avocado",
        "alanty",
        "apricot",
        NULL
    };
    int count = ft_count_if(tab, ft_its_a);

    printf("Commence par 'a': %d\n", count);
    return (0);
}
*/
