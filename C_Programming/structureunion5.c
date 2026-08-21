#include<stdio.h>
#pragma pack (1)// memo will allocate in term 1

struct demo
{
 int i;
 float f;
 struct hello
 {

    int no;
    float marks;

 }hobj; //here we created obj so size will be 16,based on previous question
 
};
int main()
{
  
 struct demo dobj;
 printf("%d\n",sizeof(dobj));

 dobj.i=11;
 dobj.f=3.14;

 dobj.hobj.no=21;
 dobj.hobj.marks=90.67;

    return 0;
}