/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcomlan <gcomlan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 23:41:00 by gcomlan           #+#    #+#             */
/*   Updated: 2022/08/17 16:53:23 by gcomlan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> // For write

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_small_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i++] - '0');
	}
	return (result);
}

void	ft_print_hex(int nbr)
{
	if (nbr >= 16)
		ft_print_hex(nbr / 16);
	ft_putchar("0123456789abcdef"[nbr % 16]);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_print_hex(ft_small_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}

