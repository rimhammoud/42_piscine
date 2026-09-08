// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

// int main() {
//     char src[] = "hi THERE";
//    ft_strlowcase(src);
//     int s = sizeof(src) / sizeof(src[0]);    
//     int i = 0;
//     while (i < s)
//     {
//             printf("%c", src[i]);
//             i++;
//     }
//     return 0;
// }