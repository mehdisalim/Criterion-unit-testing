#include <stdlib.h>
#include <string.h>

char *reverse(const char *s) {
    int len = strlen(s);
    char *result = malloc(len + 1);
    result[len] = '\0';

    for (int i = 0; i < len; i++) {
        result[i] = s[len-1-i];
    }

    return result;
}

