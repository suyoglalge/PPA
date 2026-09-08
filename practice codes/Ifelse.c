#include<stdio.h>
int main()
{
    int no1 , no2, result  ;

    printf("Enter first number :");
    scanf("%d",&no1);

    printf("Enter Second number :");
    scanf("%d",&no2);

    result = no1 + no2;

    if (result >= 120)
    {
        printf("Congratulatios you are selected");
    }
    else 
    {
        printf("Better luck next time !!");
    }
    


    return 0;
}