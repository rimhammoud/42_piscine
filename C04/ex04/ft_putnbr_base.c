/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 19:07:00 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/27 18:43:13 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_nbr(long nbr, char *base, int length);
int		check_base_errors(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int		length;
	long	n;

	n = nbr;
	length = check_base_errors(base);
	if (n == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (length == 0)
		return ;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	print_nbr(n, base, length);
	return ;
}

int	check_base_errors(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != 0)
	{
		j = i + 1;
		if (base[i] == '+' || base [i] == '-'
			|| base[i] == base [j])
			return (0);
		i++;
	}
	if (!(i == 2 || i == 8 || i == 10 || i == 16))
		return (0);
	return (i);
}

void	print_nbr(long nbr, char *base, int length)
{
	int		remainder;
	char	*output;

	if (nbr == 0)
		return ;
	remainder = nbr % length;
	output = &base[remainder];
	print_nbr((nbr / length), base, length);
	write(1, output, 1);
}

// int main()
// {
// 	ft_putnbr_base(-2147483648, "0123456789");
// 	return 0;
// }
