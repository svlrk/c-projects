#include <unistd.h>

int ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}
char *ft_rev_print(char *str)
{
	int size;
	int i;

	i = 0;
	size = ft_strlen(str);
	size--;
	while(i < size)
	{
		write(1, &str[size], 1);
		size--;
	}
	return(str);
}
int main()
{
	char *str = "";
	ft_rev_print(str);
}
