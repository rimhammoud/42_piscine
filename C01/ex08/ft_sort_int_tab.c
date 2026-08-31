/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 16:32:11 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/18 17:39:52 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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