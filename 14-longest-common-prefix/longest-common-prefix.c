#include <stdlib.h>
#include <string.h>

int same_char(char c, int idx, char **strs, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (strs[i][idx] != c)
            return (0);
    }
    return 1;
}

char * longestCommonPrefix(char ** strs, int strsSize){
    char *r = malloc(200);
    int i = 0;
    while (strs[0][i] && same_char(strs[0][i], i, strs, strsSize))
    {
        r[i] = strs[0][i];
        i++;
    }
    r[i] = 0;
    char *s = strdup(r);
    free(r);
    return (s);
}