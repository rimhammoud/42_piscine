#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	
	i = 0;
	if(size>0)
	{
		while(src[i] != '\0')
		{
			if (i == size)
			{
				i--;
				break;
			}
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	while (dest[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char s1[] = "Hello";
    char s2[79];  
    ft_strlcpy(s2, s1, 4);
    printf("%s", s2);
    return 0;
}