/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/18 15:19:08 by swahb             #+#    #+#             */
/*   Updated: 2020/07/18 17:08:31 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	ft_putchar(char a)
{
	write (1, &a, 1);
	return 0;
}

char	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i + 1] != '\0')
	{
		if (&(str[i + 0]) == &(str[i]))
		{
			ft_putchar(str[i]);
			ft_putchar(10);
			i++;
		}
	}
	if (str[i] == '\0')
	{
		return ('\0');
	}
}

int	main	()
{
	char str[] = "abcdefghig121546";
	printf("%c", ft_putstr(str));
	return (0);
}
