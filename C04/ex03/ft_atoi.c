// #include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	nb;

	i = 0;
	count = 0;
	nb = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			count++;
		i++;
	}
	count = count % 2;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb *= 10;
		nb += (str[i] - '0');
		i++;
	}
	if (count != 0)
		nb = -nb;
	return (nb);
}

// int main()
// {
//     char st[] = "   ---+--+1257559b567";
//     int i = ft_atoi(st);
//     printf("%d \n", i);
// }