#include "mystring.h"

size_t stringlength(const char *str) {
    const char *start = str;

    while (*str != '\0')
    {
        str++;
    }
    
    return str - start;
}

void stringcopy(char *str1, const char *str2) {
    while (*str2 != '\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
    
}


int stringcompare(const char *str1, const char *str2) {
    while (*str1 == *str2)
    {
        if (*str1 == '\0') {
            return 0;
        }

        str1++;
        str2++;
    }

    return (*str1 > *str2) ? 1 : -1;
    
}

char *stringconcat(char *dest, char *source) {
    char *start = dest;

    while (*dest != '\0') {
        dest++;
    }

    while (*source != '\0') {
        *dest++ = *source++;
    }

    *dest = '\0';

    return start;

}