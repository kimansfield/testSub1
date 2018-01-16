/*
 * This is to test the submodules capabilities of git
 */

#include "../testSub/openWrap.h"
#include <stdio.h>

int main(int argc,char *argv[])
{
    int fd;
    int len;
    char buf[256];

    fd = wOpen("test");
    if (fd > 0)
    {
        printf("success we opened it\n");
        len = read(fd,buf,80);
        printf("buf = %s\n",buf);
        fd = wClose(fd);
    }
    else
        printf("We bombe\n");
}
