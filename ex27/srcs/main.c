/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:38:19 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/08 16:31:12 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, FILE_NAME_MISSING, sizeof(FILE_NAME_MISSING));
		return (1);
	}
	else if (argc > 2)
	{
		write(2, TOO_MANY_ARGUMENTS, sizeof(TOO_MANY_ARGUMENTS));
		return (2);
	}
	return (ft_display_file(argv[1]));
}
