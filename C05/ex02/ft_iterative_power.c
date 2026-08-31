/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 21:39:39 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/28 21:55:12 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = base * nb;
		power--;
	}
	return (nb);
}

// int main()
// {
//     int i = ft_iterative_power(5, 5);
//     printf("%d", i);
//     return 0;
// }