/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rihammou <rihammou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 20:36:02 by rihammou          #+#    #+#             */
/*   Updated: 2026/08/19 13:34:09 by rihammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

// int main() {
//     char src[] = "hi THere";
//    ft_strupcase(src);
//     int s = sizeof(src) / sizeof(src[0]);    
//     int i = 0;
//     while (i < s)
//     {
//             printf("%c", src[i]);
//             i++;
//     }
//     return 0;
// }
