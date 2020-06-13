#include<sys/socket.h>
#include<netdb.h>
#include<ifaddrs.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct ifaddrs *addresses;

    if(getifaddrs(&addresses) == -1)
    {
        printf("getifaddrs call failed\n");
        return -1;
    }
    else
    {
        printf("Success\n");
    }
    
}