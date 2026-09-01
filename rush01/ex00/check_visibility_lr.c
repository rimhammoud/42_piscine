/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_visibility_lr.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrigor <ngrigor@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 19:53:01 by ngrigor           #+#    #+#             */
/*   Updated: 2026/08/23 22:17:53 by ngrigor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_vis_l(int data, int line[4], int pos);
int		check_vis_r(int data, int line[4], int pos);
int		do_lr_vis_checks(int data[4][4], int grid[4][4], int i_x);

int	check_vis_l(int data, int line[4], int pos)
{
	int	max;
	int	towers_visible;

	towers_visible = 1;
	max = line[pos];
	while (pos < 4)
	{
		if (max < line[pos + 1] && pos + 1 < 4)
		{
			towers_visible++;
			max = line[pos + 1];
		}
		pos++;
	}
	if (towers_visible != data)
		return (0);
	return (1);
}

int	check_vis_r(int data, int line[4], int pos)
{
	int	max;
	int	towers_visible;

	towers_visible = 1;
	max = line[pos];
	while (pos > -1)
	{
		if (max < line[pos - 1] && pos - 1 > -1)
		{
			towers_visible++;
			max = line[pos - 1];
		}
		pos--;
	}
	if (towers_visible != data)
		return (0);
	return (1);
}

int	do_lr_vis_checks(int data[4][4], int grid[4][4], int i_y)
{
	if ((check_vis_l(data[2][i_y], grid[i_y], 0) == 0)
		|| (check_vis_r(data[3][i_y], grid[i_y], 3)) == 0)
	{
		return (1);
	}
	return (0);
}
