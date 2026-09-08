// #include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
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
//     char s2[] = "abcd";
//     int nb = 9;
//     int res = ft_strncmp(s1, s2, nb);
//     printf("%d", res);
//     return 0;
// }