#include<stdio.h>
int Addition (int i , int j)
{
    int add;
    add = i + j;
    return add;

}

int main()
{
    int no1=10, no2=20,result = 0;
    result = Addition(no1, no2);

    printf("Addition is :%d\n",result);
    printf("Address of result is :%d\n",&result);


    return 0;
}