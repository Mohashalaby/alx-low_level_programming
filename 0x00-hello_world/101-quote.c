#include <unistd.h>
#include <stdio.h>

/**
 * main  - Entry point
 *
 * Decription: this programm print without using printf or puts
i *
 * Return: it should be return 1 (not success )
 *
*/

int main(void)
{
char x[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, x, 59);
return (1);


}
