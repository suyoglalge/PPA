//creat man page website

#include<stdio.h>
#include<unistd.h>  //for creat keyword....for specific os..here it works
#include<fcntl.h>  //for all os ....chances of error goes

int main()
{
    int fd =0;

    fd =creat("Hello.txt",0777);  //changes

    if (fd ==-1)     
    {
        printf("Enable to create file ...\n");
        return -1;
    }
    else
    {
        printf("File gets created with fd :%d\n",fd);
    }
    return 0;
}

/*
C:\Users\Suyog\Desktop\PPA\C_Programming\File_IO>myexe.exe
File gets created with fd :3    (file created:Hello.txt)  //no3 is on address space
*/