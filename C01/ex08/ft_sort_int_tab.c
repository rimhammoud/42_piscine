// #include <stdio.h>
// #include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;
	int	min;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		min = i;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i++;
	}
}

// int main()
// {

// 	int arr[] = {7, 0, 2, 5, 4, 9};

// 	int s = sizeof(arr) / sizeof(arr[0]);

// 	ft_sort_int_tab(arr, s);

// 	int i = 0;

// 	while (i<s){
// 		printf("%d", arr[i]);
// 		i++;
// 	}

// 	return 0;
// }