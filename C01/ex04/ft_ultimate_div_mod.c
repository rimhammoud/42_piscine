/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:19:34 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/20 20:03:14 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

// int main()
// {
// 	int x = 20;
// 	int y = 10;

// 	ft_ultimate_div_mod(&x, &y);

// 	printf("div: %d, mod: %d", x, y);

// 	return 0;
// }
