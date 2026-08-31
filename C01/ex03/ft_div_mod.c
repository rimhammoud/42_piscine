/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 15:08:51 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/18 15:18:29 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main()
// {
// 	int x = 20;
// 	int y = 5;

// 	int div;
// 	int mod;

// 	ft_div_mod(x, y, &div, &mod);
// 	printf("div: %d, mod: %d", div, mod);
// 	return 0;
// }