/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iteratve_factorial.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:00:21 by sadams            #+#    #+#             */
/*   Updated: 2020/06/25 10:07:18 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int c;
	int fac;
	if(nb <= 0 || nb > 12)
	{
		return (0);
	}
	if(nb == 1)
	{
		return 1;
	}
	c = 2;
	fac = 1;
	while(c <= nb)
	{
		fac *= c;
		c++;
	}
	return fac;
}
