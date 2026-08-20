 #include <stdio.h>
int main()
{
 // coding convention :
 //dynamic program = run hotana input mangtoy,static aadhich code
    int value1= 0,value2=0,ans = 0; //int chi default value is 0,initialization

    printf("Enter first number:");
    scanf("%d",&value1);

    printf("Enter second number:");
    scanf("%d",&value2);
    
    ans=value1+value2 ;//buisness logic

    printf("Addition is :%d",ans);

     

    return 0;
}