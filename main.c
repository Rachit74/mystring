#include <stdio.h>
#include "mystring.h"
#include <string.h>

int main() {
    char str1[] = "Rachit ";
    char str2[] = "Hooda";

    // strcat(str1, str2);
    stringconcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}