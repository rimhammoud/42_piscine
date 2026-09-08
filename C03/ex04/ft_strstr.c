// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     char *str1 = "fjnjgHelloedfnvif";
//     char *str2 = "Hello";
//     if (ft_strstr(str1, str2))
//         printf("%p string found", ft_strstr(str1, str2));
//     else
//         printf("%p string not found", ft_strstr(str1, str2));
// }