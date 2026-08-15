#include<stdio.h>

calculator(intvalue1,intvalue2)
{

    int multiply;
    multiply=intvalue1*intvalue2;
    return multiply;
}

int main(){
  int a , b, ans;

 printf("enter first no:");
 scanf("%d",&a);

 printf("enter second no:");
 scanf("%d",&b);

 ans=calculator(a,b);

  printf("%d\n",ans);
    return 0;
}