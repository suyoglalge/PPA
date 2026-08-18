#include<stdio.h>
#pragma pack (1) //we can store 1 ,2,4,8

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

// bcoz of pragma padding dosent happens,default we get memory wrt 4byte,but as we mentioned
//here pragma 1 , we get memory according to 1byte (1x)