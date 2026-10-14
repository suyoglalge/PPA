#include<stdio.h>
#include<unistd.h> 
#include<fcntl.h>         //vimp

int main()
{
    int fd =0;

    fd =open("Hello.txt",O_RDWR);

    if (fd ==-1)     //file nahi bhetli tr -1 return hot
    {
        printf("Enable to open file ...\n");
        return -1;
    }
    else
    {
        printf("File gets opende with fd :%d\n",fd);

        close(fd);
    }
    return 0;
}
