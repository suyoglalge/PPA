#include<iostream>
using namespace std;

#pragma pack(1)//bcoz of padding we use this..al rules are same of c in cpp

class demo
{

    int i; //data
    char ch;
    float f; //data 

};

int main()
{

    demo dobj;

    cout<<sizeof(dobj)<<"\n";

    return 0;
}

//private cha data fkt cllass la disto