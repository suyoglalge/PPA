#include <stdio.h>
int Addition(int i , int j)
{
    int add;
    add = i +j;//buisness logic
    return add;
}
int main()
{
    int no1 = 0 , no2 = 0 , result;

    printf("enter first number : \n");
    scanf("%d",&no1);

    printf("enter second number : \n");
    scanf("%d",&no2);

    result = Addition (no1,no2);

    printf("The additon is  : %d\n",result);

    return 0;
}