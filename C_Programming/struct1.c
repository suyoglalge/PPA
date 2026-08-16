#include<stdio.h>
#pragma pack(1)


struct demo 
{
    int a; //4
    float b; //4
};

int main()
{

 struct demo dobj1;
 dobj1.a =21;
 dobj1.b = 45.6;


 printf("%d\n",dobj1.a);
 printf("%d\n",sizeof(struct demo));
 
 
 


    return 0;
}