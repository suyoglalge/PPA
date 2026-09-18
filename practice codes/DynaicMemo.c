#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *ptr  = (int *)malloc(sizeof(int));

    if (ptr == NULL)
    {
      printf("Memory Allocation Failed.\n");
    }

    *ptr = 25;
    printf("Value : %d\n",*ptr);

    free (ptr);
    ptr = NULL;
    
    return 0;
}