/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:27:18 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/08 16:15:31 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	ft_display_file(char *path)
{
	int		fd;
	char	buffer[BUF_SIZE + 1];
	int		size;

	fd = open(path, O_RDONLY);
	if (fd == -1)
	{
		write(2, CANNOT_READ_FILE, sizeof(CANNOT_READ_FILE));
		return (3);
	}
	size = read(fd, buffer, BUF_SIZE);
	while (size > 0)
	{
		buffer[size] = '\0';
		write(1, buffer, size);
		size = read(fd, buffer, BUF_SIZE);
	}
	close(fd);
	return (0);
}
