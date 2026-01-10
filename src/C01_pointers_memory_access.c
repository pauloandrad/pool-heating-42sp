#include "../include/C01_pointers_memory_access.h"

#include <io.h>
#include <stdio.h>

void ft_ft(int *n) {
    *n = 42;
}

void ft_wap(int *a, int *b) {
    const int temp = *a;

    *a = *b;
    *b = temp;
}

void ft_div_mod(int *div, int *mod, int a, int b) {
    *div = a / b;
    *mod = a % b;
}

void ft_ultimate_ft(int *********n) {
    *********n = 42;
}

void ft_putstr(char *str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
}

void ft_rev_int_tab(int *tab, int size) {
    int i = 0;
    int last_idx = size - 1;

    while (i < last_idx) {
        const int temp = tab[i];
        tab[i] = tab[last_idx];
        tab[last_idx] = temp;

        i++;
        last_idx--;
    }
}

void ft_sort_int_tab(int *tab, int size) {
    int i;
    int j;
    int last_idx;

    i = 0;
    j = 0;
    last_idx = size - 1;

    while (i < last_idx) {
        while (j < last_idx) {
            int temp = tab[j + 1];

            if (temp < tab[j]) {
                tab[j + 1] = tab[j];
                tab[j] = temp;
            }

            j++;
        }
        j = 0;
        i++;
    }
}


