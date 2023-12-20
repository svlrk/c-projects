#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tet;

	tet = *a;
	*a = *b;
	*b = tet;
}
int main()
{
	int a = 10;
	int b = 5;
	ft_swap(&a, &b);
	printf("%d%d", a, b);
}
