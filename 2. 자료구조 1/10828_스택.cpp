#include <stdio.h>

#define MAX_N (10000 + 1)

static int _arr[MAX_N];
int _top = -1;

int empty() { return _top == -1 ? 1 : 0; }
void push(int v) { _arr[++_top] = v; }
int pop() { return empty() ? -1 : _arr[_top--]; }
int size() { return _top + 1; }
int top() { return empty() ? -1 : _arr[_top]; }

int xstrcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }

    return *s1 - *s2;
}

int main(int argc, char **argv)
{
    int N;
    char command[100];
    int value;

    scanf("%d", &N);
    while (N--)
    {
        scanf("%s", command);
        if (!xstrcmp(command, "push")) {
            scanf("%d", &value);
            push(value);
        }
        else if (!xstrcmp(command, "pop")) {
            printf("%d\n", pop());
        }
        else if (!xstrcmp(command, "top")) {
            printf("%d\n", top());
        }
        else if (!xstrcmp(command, "size")) {
            printf("%d\n", size());
        }
        else if (!xstrcmp(command, "empty")) {
            printf("%d\n", empty());
        }
        else {
            printf("unknown command : %s", command);
        }
    }

    return 0;
}