/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_repetitions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrigor <ngrigor@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 19:53:48 by ngrigor           #+#    #+#             */
/*   Updated: 2026/08/23 16:39:35 by ngrigor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_repetition_rows(int grid[4][4]);
int	check_repetition_columns(int grid[4][4]);
int	do_all_repetition_checks(int grid[4][4]);

int	check_repetition_rows(int grid[4][4])
{
	int	i_x;
	int	i_y;
	int	j;

	i_x = 0;
	i_y = 0;
	while (i_y < 4)
	{
		while (i_x < 4)
		{
			j = i_x + 1;
			while (j < 4)
			{
				if (grid[i_y][i_x] == grid[i_y][j] && grid[i_y][i_x] != 0)
					return (0);
				j++;
			}
			i_x++;
		}
		j = 0;
		i_x = 0;
		i_y++;
	}
	return (1);
}

int	check_repetition_columns(int grid[4][4])
{
	int	i_x;
	int	i_y;
	int	j;

	i_x = 0;
	i_y = 0;
	while (i_x < 4)
	{
		while (i_y < 4)
		{
			j = i_y + 1;
			while (j < 4)
			{
				if (grid[i_y][i_x] == grid[j][i_x] && grid[i_y][i_x] != 0)
					return (0);
				j++;
			}
			i_y++;
		}
		j = 0;
		i_y = 0;
		i_x++;
	}
	return (1);
}

int	do_all_repetition_checks(int grid[4][4])
{
	int	res;

	res = 0;
	res += check_repetition_columns(grid);
	res += check_repetition_rows(grid);
	return (res);
}
