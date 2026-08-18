#include<stdio.h>


struct demo
{
    int i;
    char ch;  //bcoz of char padding occurs
    float f;
   
    
};

int main()
{

  printf("%d\n",sizeof(struct demo ));

    return 0;
}