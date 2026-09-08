int		ft_char_is_numeric(char c);

void	fill_grid(int grid[4][4])
{
	int	i_x;
	int	i_y;

	i_x = 0;
	i_y = 0;
	while (i_y < 4)
	{
		while (i_x < 4)
		{
			grid[i_y][i_x] = 0;
			i_x++;
		}
		i_x = 0;
		i_y++;
	}
}

int	fill_data(int data[4][4], char *argv[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < 4)
	{
		while (k < 4)
		{
			if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\0')
			{
				if (ft_char_is_numeric(argv[1][i]) == 0 || argv[1][i] > 4 + '0')
					return (0);
				data[j][k] = argv[1][i] - '0';
				k++;
			}
			i++;
		}
		k = 0;
		j++;
	}
	return (j);
}

int	ft_char_is_numeric(char c)
{
	if ((c < '0') || c > '9')
	{
		return (0);
	}
	return (1);
}
