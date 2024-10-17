/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehenry <ehenry@student.42luxembourg.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:49:25 by ehenry            #+#    #+#             */
/*   Updated: 2024/10/17 20:08:45 by ehenry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#define BUFFER_SIZE 4096

void	ft_disp_file(int f)
{
	char	buffer[BUFFER_SIZE];
	int	bytes_read;

	while ((bytes_read = read(f, buffer, BUFFER_SIZE)) > 0)
		write (1, buffer, bytes_read);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac != 2)
	{
		if (ac > 2)
			write (2, "Too many arguments.\n", 20);
		if (ac < 2)
			write (2, "File name missing.\n", 19);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "Cannot open file.\n", 18);
		return (1);
	}
	ft_disp_file(fd);
	close(fd);
	return (0);
}
