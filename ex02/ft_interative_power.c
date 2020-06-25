/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:51:00 by sadams            #+#    #+#             */
/*   Updated: 2020/06/25 13:01:15 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
	int pwr;

	pwr = 1;
	if(power < 0)
	{
		return (0);
	}
	if(power > 1)
	{
		while(power != 0)
		{
			pwr *= nb;
			--power;
		}
		return pwr;
	}
	else
	{
		return (1);
	}
}
