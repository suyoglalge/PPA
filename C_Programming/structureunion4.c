#include<stdio.h>
#pragma pack (1)// memo will allocate in term 1

struct demo
{
 int i;
 float f;
 struct hello
 {

    int no;
    float marks;

 };
 
};
int main()
{
  
 struct demo dobj;
 printf("%d\n",sizeof(dobj));


     //size expected is 8 always in interview , but if 16 comes then explain
     //this output changes are depended on programer>prg>os(platforn)>compiler>microprocessor(architecture)
     //as there are diff version of os(win,linus,mac)(32bit,64bit)each have 1000 versions so 1000 diffrent copies
     //so next that copies goes to compiler(mingw,gcc)(32bit,64bit)so next microprocessor have (intel,amd,arm)
     //(32bit,64bit,128bit)and so on there are multiple varaties..from there our output is decided

     //java mdhe os and microprocessor cha farak padat nhi mhnun sarvance answer same astat (for c/c++)
     //we have same website but diffrent os architecture


    return 0;
}