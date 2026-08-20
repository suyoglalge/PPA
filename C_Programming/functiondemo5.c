#include<stdio.h>

void addition (int no1,int no2)//function chi return value kahich nhi yenar bcoz we write void
{
int result = 0;
result = no1+no2; //buisness logic
printf("%d\n",result);//never write printf,scanf in function,this is for example
                      // void ahe mhnun return nhi lihla

}
int main()
{
int value1= 0,value2=0,ans = 0; //int chi default value is 0,initialization

    printf("Enter first number:");
    scanf("%d",&value1);

    printf("Enter second number:");
    scanf("%d",&value2);

    addition(value1,value2);  //function call
    return 0;

}