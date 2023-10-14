#include<stdio.h>
#include<string.h>
#include<fcntl.h>
#include <sys/stat.h>

int main(int argc, char* argv[]){
    int fd;
    int numByteWritten;
    // note that the flag O_APPEND will make the data are always appended to end of file
    fd = open(argv[1], O_RDWR | O_APPEND, 0666);
    if(fd == -1){
        printf("fail open\n");
    }
    lseek(fd, 0, SEEK_SET);
    numByteWritten = write(fd, "abc", strlen("abc"));

    close(fd);
    return 0;
}