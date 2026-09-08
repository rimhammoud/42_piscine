// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main()
// {
// 	char s1[] = "Hello";
//     char s2[79];  
//     ft_strcpy(s2, s1);
//     printf("%s", s2);
//     return 0;
// }