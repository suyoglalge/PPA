#include<stdio.h>

int addition (int no1,int no2)//here if we write int then we will write return
{
int result = 0;
result = no1+no2; //buisness logic
return result;
                      // void ahe mhnun return nhi lihla

}
int main()
{
int value1= 0,value2=0,ans = 0; //int chi default value is 0,initialization

    printf("Enter first number:");
    scanf("%d",&value1);

    printf("Enter second number:");
    scanf("%d",&value2);

    ans=addition(value1,value2);  //function call

    printf("addition is :%d",ans);


    return 0;

}