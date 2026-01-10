#include "../include/C02_string.h"
#include <string.h>


unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
    int i;
    unsigned int src_len;

    i = 0;
    src_len = 0;

    while (src[i] != '\0' && i < size - 1 && size > 0) {
        dest[i] = src[i];

        i++;
    }

    dest[i] = '\0';

    while (src[src_len]) {
        src_len++;
    }

    return src_len;
}