#include <unistd.h>
void last_word(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	i -= 1;
	while(str[i] == '\t' || str[i] == 32)
		i--;
	while(i > 0)
	{
		if(str[i] == '\t' || str[i] == 32)
			break;
	i--;
	}
	while(str[i] != '\t' || str[i] != '0' || str[i] != 32)
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1,"\n",1);

}
int main(int ac, char **av)
{
	if(ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
}
