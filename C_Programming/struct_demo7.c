#include<stdio.h>
#pragma pack (1) 
struct demo
{
   int no;//4
   int arr[3];//16byte

};

int main()
{
    struct demo dobj; // demo cha object
    printf("%d\n",sizeof(dobj));

    dobj.no = 10;

    dobj.arr[0]=11;
    dobj.arr[1]=21;
    dobj.arr[2]=51;

    printf("%d\n",dobj.arr[1]);


    return 0;
} 
