#include<stdio.h>

typedef unsigned int UINT;
typedef unsigned long int ULONG;

int main()
{
    UINT i =11;                             //unsigned int
    ULONG j =51;                            //unsigned long int

    printf("Inside typedef demo\n");
    printf("%d\n",sizeof(i));
    printf("%d",sizeof(j));


    return 0;
}