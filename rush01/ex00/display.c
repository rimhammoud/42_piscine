/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrigor <ngrigor@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/23 16:22:01 by ngrigor           #+#    #+#             */
/*   Updated: 2026/08/23 18:15:11 by ngrigor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_grid(int grid[4][4]);
void	print_error(void);
void	ft_putchar(char c);

void	print_grid(int grid[4][4])
{
	int		i_x;
	int		i_y;
	char	c;

	i_x = 0;
	i_y = 0;
	while (i_y < 4)
	{
		while (i_x < 4)
		{
			c = grid[i_y][i_x] + '0';
			ft_putchar(c);
			if (i_x < 3)
				ft_putchar(' ');
			i_x++;
		}
		ft_putchar('\n');
		i_x = 0;
		i_y++;
	}
}

void	print_error(void)
{
	write (1, "Error\n", 6);
}

void	ft_putchar(char c)
{
	write (1, &c, 1);
}
