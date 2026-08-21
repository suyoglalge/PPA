#include<stdio.h>
#pragma pack (1)// memo will allocate in term 1

struct demo
{
 int i;
 float f;
 double d;

};
int main()
{
 
    printf("%d\n",sizeof(struct demo));

    return 0;
}