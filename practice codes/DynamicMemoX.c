#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;

    p = calloc(3, sizeof(int));

    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);

    free(p);
    return 0;
}