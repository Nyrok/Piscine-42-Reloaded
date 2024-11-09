/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkonte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:52:23 by hkonte            #+#    #+#             */
/*   Updated: 2024/11/08 13:39:19 by hkonte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

int	main(int argc, char **argv)
{
	unsigned int	i;

	i = 1;
	if (argc < 1)
		return (1);
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	return (0);
}
