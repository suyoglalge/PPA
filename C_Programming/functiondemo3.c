#include <stdio.h>

//global variables
//memory allocated in data section
//it is bad programming practice to use global variable,try not to use global

//buisness logic should be in onother function

 int value1 = 10;    
 int value2=11;      
 int ans = 0;       


int main()
{
   // local variables     
 ans = value1 + value2;

 printf("Addition is :%d\n",ans);

    return 0;
}