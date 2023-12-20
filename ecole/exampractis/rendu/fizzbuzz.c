#include <unistd.h>

void    ft_write_number(int number)
{
    if(number > 9)
    ft_write_number (number / 10);
    write(1, &"0123456789"[number % 10], 1);
}

int main(void)
{
    int nb;

    nb = 1;
    while(nb <= 100)
    {
        if(nb % 3 == 0 && nb % 5 == 0)
            write(1, "bompat", 8);
        else if(nb % 3 == 0 )
            write(1, "pat", 4);
        else if(nb % 5 == 0)
            write(1, "bom", 4);
        else
            ft_write_number(nb);
        write(1, "\n", 1);
        nb++;
    }
}