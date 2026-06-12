#ifndef MYSTRING_H
#define MYSTRING_H
#include <stddef.h>

size_t stringlength(const char *str);

void stringcopy(char *str1, const char *str2);

int stringcompare(const char *str1, const char *str2);

char *stringconcat(char *dest, char *source);

#endif