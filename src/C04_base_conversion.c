#include "../include/C04_base_conversion.h"

#include <unistd.h>

int ft_atoi(char *str) {
    int i;
    int sign;
    int num;

    i = 0;
    sign = 1;
    num = 0;

    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)) i++;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-') sign *= -1;
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        num = (num * 10) + (str[i] - '0');
        i++;
    }

    return sign * num;
}

int ft_get_base_len(char *base) {
    int i;
    int j;

    i = 0;
    j = 0;

    while (base[i] != '\0') {
        if (base[i] == '-' || base[i] == '+' || (base[i] >= 9 && base[i] <= 13) || base[i] == ' ') return 0;

        while (base[j] != '\0') {
            if (i != j && base[i] == base[j]) return 0;
            j++;
        }
        j = i + 1;
        i++;
    }

    if (i <= 1) return 0;

    return i;
}

void ft_calc_base(long nbr, char *base, int base_len) {
    if (nbr >= base_len) {
        ft_calc_base(nbr / base_len, base, base_len);
    }

    write(1, &base[nbr % base_len], 1);
}

void ft_putnbr_base(int nbr, char *base) {
    int base_len;
    long positive_n;

    base_len = ft_get_base_len(base);

    if (base_len == 0) return;
    if (nbr < 0) {
        positive_n = -nbr;
        write(1, "-", 1);
    } else {
        positive_n = nbr;
    }

    ft_calc_base(positive_n, base, base_len);
}