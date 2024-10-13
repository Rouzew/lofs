#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include "lofs.h"
#include "param.h"
int main()
{
    printf("sizeof RECORDBLOCK %d\n",sizeof(struct BlockInode));
    int fd = open("disk",O_RDWR);
    char buf[1024];
    close(fd);

    return 0;
}
