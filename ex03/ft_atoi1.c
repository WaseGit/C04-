/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 07:47:45 by swahb             #+#    #+#             */
/*   Updated: 2020/07/22 16:06:40 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	ft_ISOMON(char c)
{
		if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
			return (1);
		if (c == '-' || c == '+')
			return (2);
		if (47 < c && c < 58)
			return (3);
		return (0);	
}


int	ft_power(int power)
{
	int i;
	int base;

	i = 0;
	base = 1;
	while (i < power - 1)
	{
		base *= 10;
		i++;
	}
	return (base);
}

int	ft_CTI (int *array, int count, int len )
{
	int i;
	int nb;

	i = 0;
	nb = 0;

	while (i < len)
	{
		nb += array[i] * ft_power(len - 1);
		i++;
	}
	if (count % 2 != 0)
		return (nb * -1);
	return (nb);
}
int	ft_atoi(char *str)
{
	int i;
	int j;
	int array[100];
	int count;

	i = -1;
	j = 0;
	count = 0;
	while (str)
	{
		i++;
		if (ft_ISOMON(str[i]) != 0 )
			count++;
		if (ft_ISOMON(str[i]) == 3)
		{
			array[j] = str[i] - '0';
			j++;
			continue;
		}
		return (ft_CTI(array, count, j));
	}
	return (0);
}

int	main	()
{
	char str[] = "++-+++--123456bqc 223 a!";
	printf("Atoi generate this: %d\n", ft_atoi(str));
	//return 0;
}
