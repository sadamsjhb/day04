/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadams <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 16:04:40 by sadams            #+#    #+#             */
/*   Updated: 2020/06/25 10:08:50 by sadams           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{
	if(nb < 0 || nb >= 12)
	{
		return (0);
	}
	if(nb >= 1)
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
	else
	{
		return (1);
	}
}
