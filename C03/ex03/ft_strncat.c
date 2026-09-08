// #include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main() {
//     int n = 3;
//     char dest[20] = "abc";
//     char src[] = "DE)womkd";
//     ft_strncat(dest, src, n);
//     printf("%s\n", dest);
//     return 0;
// }