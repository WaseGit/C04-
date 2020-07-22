/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/22 19:37:34 by swahb             #+#    #+#             */
/*   Updated: 2020/07/23 00:34:27 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

char	ft_putchar(char c)
{
	write (1, &c, 1);
//	return (0);
}

int	ft_getlen(char *str)
{

	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_check_base(char *base)
{
	int i;
	int j;

	i = 0;
	j = i + 1;
	while (base[0] == '\0')
		return (0);
	 	while (base)
		{
			if (base[i] == '-' || base[i] == '+')
			return (0);
				
		}
		while (base)
		{
			if (base[i] == base[j])
			{
				return (0);
				j++;
			}
			i++;
		}
		return (1);
}

int ft_putnbr_base(int nbr, char *base)
{
	unsigned int i;
	unsigned int nb;
	int unbr;
	int a;

	i = 0;
	nb = nbr;
	unbr = ft_getlen(base);
	while (base[i] != '\0')
	{
		while (ft_check_base(base))
		{
			if( nb < 2 )
			{
				ft_putchar('-');
				nb = nb * -1;
			}
			if (nb > 9)
			{
				ft_putnbr_base(*(base + i) / nb , unbr);
				a = ft_putchar(*(base + i) % nb);
			}
			i++;
	   }
		return (a);
	}
}

int	main	()
{

	char str[] = "abd123";
	printf("Atoi print base generate : %d \n", ft_putnbr_base(100, str));
	return 0;
}
