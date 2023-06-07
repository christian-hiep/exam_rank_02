/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 19:26:55 by cvu               #+#    #+#             */
/*   Updated: 2023/06/04 19:30:33 by cvu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
    int     i = 0;
    int sign = 1;
    int result = 0;

    if (str[0] == '-' || str[0] == '+')
    {
        if (str[0] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
    if (n == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        n = 147483648;
    }
    if (n < 0)
    {
        ft_putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putchar(n % 10 +'0');
    }
    else
    {
       ft_putchar(n + '0');
    }
}

int	main(int ac, char** av)
{
	int	i;
	int	nbr;

	if (ac != 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		nbr = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nbr);
			write(1, " = ", 3);
			ft_putnbr(i * nbr);
			write(1, "\n", 1);
			i += 1;
		}
	}
	return (0);
}
