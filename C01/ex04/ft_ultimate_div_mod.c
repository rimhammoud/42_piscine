// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a / *b;
	*b = *a % *b;
	*a = c;
}

// int main()
// {
// 	int x = 20;
// 	int y = 10;

// 	ft_ultimate_div_mod(&x, &y);

// 	printf("div: %d, mod: %d", x, y);

// 	return 0;
// }
