// avarage counting using function

#include <stdio.h>


calculator(floatvalue1,floatvalue2,floatvalue3,floatvalue4)
{
float avarage;
avarage=( floatvalue1+floatvalue2 + floatvalue3)/floatvalue4;
return avarage;
}
int main(){

 float maths,biology,physics,subjects,grade;

 printf("enter your mathematics marks\n");
 scanf("%f\n",&maths);

 printf("enter your biology grades\n");
 scanf("%f\n",&biology);

 printf("enter your physics marks");
 scanf("%f\n",&physics);

 printf("entr total number of subjects\n");
 scanf("%f\n",&subjects);

 grade= calculator(maths,biology,physics,subjects);

 printf("YOUR TOTAL AVRAGE IS :%f\n",grade);



    return 0;
}