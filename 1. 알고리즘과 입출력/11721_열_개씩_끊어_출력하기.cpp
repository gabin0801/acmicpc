#include <stdio.h>

#define MAX_N (100 + 1)

static inline size_t xstrlen(const char *src)
{
    size_t len = 0;
    while (src[len] != 0)
        ++len;

    return len;
}

static inline char* xstrncpy(char* dst, const char* src, size_t n)
{
    while (n--)
    {
        *dst ++ = *src ++;
    }
    *dst ++ = 0;
    return dst;
}

int main(int argc, char **argv)
{
    char str[MAX_N] = { 0, };
    char dst[10 + 1] = { 0, };

    scanf("%s", str);
    size_t len = xstrlen(str);
    int loopCnt = len / 10 + 1;

    for (size_t i = 0; i < loopCnt; ++i)
    {
        xstrncpy(dst, str + 10 * i, 10);
        printf("%s\n", dst);
    }

    return 0;
}