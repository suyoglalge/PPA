#include"Marvellous.h"

//entry point function
int main()
{
    float fRet=0.0f;

    fRet = area(7.5f);

    printf("Area of circle is %f",fRet);

    return 0;               //return sucess
}

//gcc Main.c Helper.c -o myexe
//gcc Main.c helper.c -save-temps -o myexe           for i,o,s files
//myexe.exe