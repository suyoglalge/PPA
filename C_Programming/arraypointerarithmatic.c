#include<stdio.h>
int main(){

int arr[]={10,20,30,40};
int *p=&(arr[1]);
int *q=&(arr[3]);

printf("%d\n",p);//345678
printf("%d\n",q);//2345
printf("%d\n",p+2);
printf("%d\n",q-2);
printf("%d\n",q-p);


    return 0;
}