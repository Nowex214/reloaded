/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:49:25 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 16:08:32 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_disp_file(int f)
{
	char	buffer;

	while (read(f, &buffer, 1) != 0)
		write (1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		if (ac > 2)
			write (2, "Too many arguments.\n", 20);
		if (ac < 2)
			write (2, "File name missing.\n", 19);
		return (1);
	}
	i = open(av[1], O_RDONLY);
	ft_disp_file(i);
	close(i);
	return (0);
}
