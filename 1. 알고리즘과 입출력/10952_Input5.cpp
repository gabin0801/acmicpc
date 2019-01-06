#include <stdio.h>

int main(int argc, char** argv)
{
    int A, B;
    while (scanf("%d%d", &A, &B) != EOF && !(A == 0 && B == 0))
    {
        printf("%d\n", A + B);
    }
    return 0;
}