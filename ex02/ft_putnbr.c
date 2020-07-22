/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 17:12:00 by swahb             #+#    #+#             */
/*   Updated: 2020/07/23 00:35:41 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char a)
{
	write(1, &a, 1);
	return 0;
}

int	ft_putnbr(int nb)
{
	int n; 

	n = nb;
	if (n == -2147483648)
	{
		write (1, &n, 11);
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;	
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putchar (n % 10 + 48);
		//ft_putchar(n + 0);
	}
}

int	main	()
{
	int nb = 42;
	printf("%d", ft_putnbr(nb));
	return 0;
}
