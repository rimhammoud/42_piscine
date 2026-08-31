/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 21:57:32 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/25 12:50:18 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			j = s1[i] - s2[i];
			return (j);
		}
	}
	return (0);
}

// int main() {
//     char s1[] = "abcd";
//     char s2[] = "abcdi";
//     int res = ft_strcmp(s1, s2);
//     printf("%d", res);
//     return 0;
// }