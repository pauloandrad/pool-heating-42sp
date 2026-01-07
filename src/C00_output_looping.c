#include "../include/C00_output_looping.h"
#include <unistd.h>

void ft_putchar(const char c) {
    write(1, &c, 1);
}

void ft_print_alphabet() {
    char letter = 'a';

    while (letter <= 'z') {
        ft_putchar(letter);
        letter++;
    }
}

void ft_print_numbers() {
    char number = '0';
    while (number <= '9') {
        ft_putchar(number);
        number++;
    }
}

void ft_print_comb() {
    char const max_h = '7';
    char const max_t = '8';
    char const max_u = '9';

    char h, t, u;

    h = '0';

    while (h <= max_h) {
        t = h + 1;

        while (t <= max_t) {
            u = t + 1;

            while (u <= max_u) {
                write(1, &h, 1);
                write(1, &t, 1);
                write(1, &u, 1);

                if (!(h=='7' && t=='8' && u=='9')) {
                    write(1, ", ", 1);
                }

                u++;
            }
            t++;
        }
        h++;
    }
}

void ft_write(void) {
    write(1, "7", 1);
}