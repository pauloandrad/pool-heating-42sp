#include "../include/C03_string_memory.h"
#include <string.h>


char * ft_strncat(char *dest, char *src, unsigned int size) {
    int i;
    int j;
    i = 0;
    j = 0;
    if (size > 0) {
        while (dest[i] != '\0') {
            i++;
        }

        while (src[j] != '\0' && j < size) {
            dest[i + j] = src[j];
            j++;
        }

        dest[i + j] = '\0';
    }
    return dest;
}