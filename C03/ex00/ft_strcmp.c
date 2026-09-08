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