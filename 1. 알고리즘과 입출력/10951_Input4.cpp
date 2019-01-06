#include <stdio.h>

int main(int argc, char** argv)
{
    int A, B;

    while (scanf("%d%d", &A, &B) != EOF)
    {
        printf("%d\n", A + B);
    }
    return 0;
}