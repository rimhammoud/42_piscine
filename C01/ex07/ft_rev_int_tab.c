// #include <unistd.h>
// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	c;
	int	count;

	count = size;
	n = size / 2;
	i = 0;
	while (i < n)
	{
		c = tab[i];
		tab[i] = tab[count - 1];
		tab[count - 1] = c;
		count--;
		i++;
	}
}

// int main()
// {

// 	int arr[] = {1, 2, 3, 4, 5, 6};

// 	int s = sizeof(arr) / sizeof(arr[0]);

// 	ft_rev_int_tab(arr, s);

// 	int i = 0;

// 	while (i<s){
// 		printf("%d", arr[i]);
// 		i++;
// 	}

// 	return 0;
// }