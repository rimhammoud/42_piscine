// #include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	total;

	total = nb;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	total = total * (ft_recursive_factorial(nb - 1));
	return (total);
}

// int main()
// {
// 	int i = ft_recursive_factorial(5);
// 	printf("%d", i);
// 	return 0;
// }