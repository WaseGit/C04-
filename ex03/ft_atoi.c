/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swahb <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 23:57:22 by swahb             #+#    #+#             */
/*   Updated: 2020/07/22 19:36:48 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_sign (int a)
{
	if (a % 2 == 0)
		return (a);
	else 
		return (-1 * a);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int s = 0;
	int m = 0 ;
	int nbr;
	int nv ;

	while ((str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ' || str[i] == '-' || str[i] == '+') && (str[i] != '\0'))
	{
		if (str[i] == '-')
				i++;
				m++;
				s = 1;
	}
		
		while (('0' <= str[i]  && str[i] <= '9'))
		{
			nv = nv * 10 + (*(str + 1) - 48 );	
			i++;
			s = 0;
		}
		nbr = nv;
		if (s > 0 )
			return(ft_sign(nbr));
		else
			return (nbr);

	
}


int	main	()
{
	//char str1[] = "-1234iabc567";
	//int result = atoi(str);*/
	

	char str[] = "-1123";
	printf("%d \n", ft_atoi(str));
	return 0 ; 
}
