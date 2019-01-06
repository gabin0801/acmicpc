#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    char str[102] = { 0, };

    while (fgets(str, 102, stdin) != NULL)
    {
        printf("%s", str);
    }
    return 0;
}