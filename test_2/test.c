#include <unistd.h>

void ft_putchar(char c){
    write (1, &c, 1);
}

void ft_write_reverse_alphabet(void){
    char c='z';
    while (c>96) ft_putchar(c--);
    write (1, "\n", 1);
}

void ft_write_alphabet(void){
    char c='a';
    while (c<123) ft_putchar(c++);
    write (1, "\n", 1);
}

void ft_print_numbers(void){
    char number=48;
    while (number<58) ft_putchar(number++);
    write (1, "\n", 1);
}



int main (void) {
    ft_write_alphabet();
    ft_write_reverse_alphabet();
    ft_print_numbers();
    return 0;
}
