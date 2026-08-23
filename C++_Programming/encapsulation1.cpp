#include<iostream>
using namespace std;

class demo
{

    int i; //data
    char ch;            //here padding happens
    float f; //data 

};

int main()
{

    demo dobj;

    cout<<sizeof(dobj);

    return 0;
}

//private cha data fkt cllass la disto