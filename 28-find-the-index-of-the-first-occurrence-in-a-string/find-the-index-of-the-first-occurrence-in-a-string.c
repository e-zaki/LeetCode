#include <string.h>

int strStr(char * haystack, char * needle){

    int i = -1, len = strlen(needle);
    while (haystack[++i])
    {
        if (!strncmp(haystack+i, needle, len))
            return i;
    }
    return -1;
}