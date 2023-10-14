#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main(){
    int fd;
    char buffer[10] = "Hello Khoa";
    int numByteWritten;

    fd = open("myfile.txt", O_RDWR | O_CREAT, 0666);
    if(fd == -1){
        printf("fail open\n");
    }

    numByteWritten = write(fd, buffer, strlen(buffer));
    printf("bytes was written: %d\n", numByteWritten);

    lseek(fd, 1, SEEK_CUR);
    numByteWritten = write(fd, "dep trai qua", strlen("dep trai qua"));

    close(fd);
    return 0;
}