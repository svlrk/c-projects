
int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	int i;
	int test;
	int size;

	i = 0;
	size = ft_strlen(str) - 1;
	while(size > i)
	{
		test = str[i];
		str[i] = str[size];
		str[size] = test;
		i++;
		size--;
	}
	return(str);
}
#include <stdio.h>
int main()
{
	int i = 0;
	
	char str[] = "sevval";
	printf("%s", ft_strrev(str));
}
