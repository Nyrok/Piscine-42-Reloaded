/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:54:13 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/08 18:18:31 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FILE_H
# define FT_FILE_H
# include <unistd.h>
# include <fcntl.h>
# define CANNOT_READ_FILE "Cannot read file.\n"
# define TOO_MANY_ARGUMENTS "Too many arguments.\n"
# define FILE_NAME_MISSING "File name missing.\n"
# define BUF_SIZE 4096

int	ft_display_file(char *path);

#endif
