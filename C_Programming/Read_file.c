#include<stdio.h>
#include<unistd.h> 
#include<fcntl.h>         

int main()
{
    int fd =0;
    char Arr[20]={'\0'};  //rikama challay

    fd =open("Hello.txt",O_RDONLY);

    if (fd ==-1)     
    {
        printf("Enable to open file ...\n");
        return -1;
    }
    else
    {
        printf("File gets opende with fd :%d\n",fd);
        read(fd,Arr,13);         //hya path la chally read kraila
        close(fd);
    }

    printf("data from file is %s",Arr);
    return 0;
}
//ooutput:File gets opende with fd data from file is Marvellous...