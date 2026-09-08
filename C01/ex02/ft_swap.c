void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int main()
// {
// 	int x = 5;
// 	int y = 7;

// 	ft_swap(&x, &y);
// 	printf("%d,%d", x, y);
// 	return 0;

// }