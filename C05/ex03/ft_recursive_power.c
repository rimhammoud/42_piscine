// #include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	final;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	final = nb * ft_recursive_power(nb, power - 1);
	return (final);
}

// int main()
// {
// 	int i = ft_recursive_power(2,4);
// 	printf("%d", i);
// 	return 0;
// }