#include <stdio.h>
int main()
{

 int value1 = 10;     //this  all 3 are local variable,we mostly use local
 int value2=11;      // je je variable main funtion cha aat ahe tyanna memory stack section vr bhetate
 int ans = 0;       // data section mdhe jaga allocate hote jr variable global mdhe asl

 ans = value1 + value2;

 printf("Addition is :%d\n",ans);

    return 0;
}