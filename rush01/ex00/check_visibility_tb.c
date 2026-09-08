int		check_vis_t(int data, int grid[4][4], int pos, int i_x);
int		check_vis_b(int data, int grid[4][4], int pos, int i_x);
int		do_tb_vis_checks(int data[4][4], int grid[4][4], int i_y);

int	check_vis_t(int data, int grid[4][4], int pos, int i_x)
{
	int	max;
	int	towers_visible;

	towers_visible = 1;
	max = grid[0][i_x];
	while (pos < 4)
	{
		if (max < grid[pos + 1][i_x] && pos + 1 < 4)
		{
			towers_visible++;
			max = grid[pos + 1][i_x];
		}
		pos++;
	}
	if (towers_visible != data)
		return (0);
	return (1);
}

int	check_vis_b(int data, int grid[4][4], int pos, int i_x)
{
	int	max;
	int	towers_visible;

	towers_visible = 1;
	max = grid[3][i_x];
	while (pos > -1)
	{
		if (max < grid[pos - 1][i_x] && pos - 1 > -1)
		{
			towers_visible++;
			max = grid[pos - 1][i_x];
		}
		pos--;
	}
	if (towers_visible != data)
		return (0);
	return (1);
}

int	do_tb_vis_checks(int data[4][4], int grid[4][4], int i_x)
{
	if ((check_vis_t(data[0][i_x], grid, 0, i_x) == 0)
		|| (check_vis_b(data[1][i_x], grid, 3, i_x)) == 0)
	{
		return (1);
	}
	return (0);
}
