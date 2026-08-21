#include<stdio.h>
//#pragma pack (1) we dont write it in union

union demo
{
    int i;
    char ch;
    
};


int main()
{
  union demo dobj;
  dobj.i=97;

  printf("%d\n",dobj.i);//97
  printf("%c\n",dobj.ch);//a

  //pratek value la ek ascii value aste...97 chi ahe a...98 chi ahe b...so on


    return 0;
}