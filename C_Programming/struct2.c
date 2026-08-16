#include<stdio.h>

struct hello
{
   int a;
   int b;
   float f;

};

int main()
{
 
    struct hello hobj1;
    struct hello hobj2;

    struct hello *p = NULL;
    p=&hobj2;

    hobj1.a=10;
    hobj1.b=20;
    hobj1.f=34.5;

    p->a=23;
    p->b=24;
    p->f=43.5f;

    printf("%d\n",hobj1.a);
    printf("%d\n",p->a);

    return 0;

}

