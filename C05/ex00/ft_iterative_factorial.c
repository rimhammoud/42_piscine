/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 18:51:25 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/27 19:14:19 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;
	int	j;

	i = 1;
	total = nb;
	j = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < j)
	{
		total = total * (nb - 1);
		nb--;
		i++;
	}
	return (total);
}

// int main()
// {
// 	int i = ft_iterative_factorial(5);
// 	printf("%d", i);
// 	return 0;
// }