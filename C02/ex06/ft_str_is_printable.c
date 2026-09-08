int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main() {
//     char src[] = "fkfdjf \3";
// int i = ft_str_is_printable(src);
//     printf("%d\n", i);
//     return 0;
// }