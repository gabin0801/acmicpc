#include <stdio.h>

int main(int argc, char** argv)
{
    int N, V;
    int sum = 0;
    scanf("%d", &N);

    while (N--)
    {
        scanf("%1d", &V);
        sum += V;
    }

    printf("%d\n", sum);

    return 0;
}