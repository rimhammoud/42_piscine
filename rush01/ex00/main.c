/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngrigor <ngrigor@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/22 12:29:16 by ngrigor           #+#    #+#             */
/*   Updated: 2026/08/23 22:15:25 by ngrigor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	print_error(void);
int		fill_data(int data[4][4], char *argv[]);
int		generate_solution(int data[4][4], int grid[4][4],
			int pos, int failed_vis_check);
void	print_grid(int grid[4][4]);
int		do_all_repetition_checks(int grid[4][4]);
int		do_lr_vis_checks(int data[4][4], int grid[4][4], int i_y);
int		do_tb_vis_checks(int data[4][4], int grid[4][4], int i_x);
void	fill_grid(int grid[4][4]);
int		count_argv(char *argv[]);

int	main(int argc, char *argv[])
{
	int		data[4][4];
	int		grid [4][4];

	if (argc != 2)
	{
		print_error();
		return (0);
	}
	fill_grid(grid);
	if (fill_data(data, argv) != 4 || count_argv(argv) != 31)
	{
		print_error();
		return (0);
	}
	if (generate_solution(data, grid, 0, 0) == 0)
	{
		print_error();
		return (0);
	}
	print_grid(grid);
	return (0);
}

int	count_argv(char *argv[])
{
	int	i;

	i = 0;
	while (argv[1][i] != '\0')
	{
		i++;
	}
	return (i);
}

int	generate_solution(int data[4][4], int grid[4][4], int pos,
				int failed_vis_check)
{
	int	i_x;
	int	i_y;

	failed_vis_check = 0;
	i_x = pos % 4;
	i_y = pos / 4;
	if (pos == 16)
		return (1);
	grid[i_y][i_x] += 1;
	if (grid[i_y][i_x] > 4)
	{
		grid[i_y][i_x] = 0;
		if (pos - 1 == -1)
			return (0);
		return (generate_solution (data, grid, pos - 1, 0));
	}
	if (do_all_repetition_checks (grid) != 2)
		return (generate_solution (data, grid, pos, 0));
	if (i_x == 3)
		failed_vis_check += do_lr_vis_checks (data, grid, i_y);
	if (i_y == 3)
		failed_vis_check += do_tb_vis_checks (data, grid, i_x);
	if (failed_vis_check > 0)
		return (generate_solution (data, grid, pos, 0));
	return (generate_solution (data, grid, pos + 1, 0));
}
