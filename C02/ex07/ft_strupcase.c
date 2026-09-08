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
