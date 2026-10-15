#include<stdio.h>
#include<unistd.h> 
#include<fcntl.h>         

int main()
{
    int fd =0;
    char Arr[]="Marvellous Infosystem";

    fd =open("Hello.txt",O_RDWR | O_APPEND);

    if (fd ==-1)     //file nahi bhetli tr -1 return hot
    {
        printf("Enable to open file ...\n");
        return -1;
    }
    else
    {
        printf("File gets opende with fd :%d\n",fd);
        write(fd,Arr,10); //fkt 10 bytes,10 char open honar
        close(fd);
    }
    return 0;
}
//output:Marvellous...Marvellous