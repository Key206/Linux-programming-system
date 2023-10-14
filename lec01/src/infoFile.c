#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include <time.h>

int main(int argc, char* argv[]){
    struct stat sb;
    // we can put the pathname of file of file into the first argument lstat
    if (lstat(argv[1], &sb) == -1) {
        perror("lstat");
        exit(EXIT_FAILURE);
    }
    printf("pathname: %s\n", argv[1]);
    
    printf("File type:                ");
    switch (sb.st_mode & S_IFMT) {
        case S_IFBLK:  
            printf("block device\n");            
            break;
        case S_IFCHR:  
            printf("character device\n");        
            break;
        case S_IFDIR:  
            printf("directory\n");               
            break;
        case S_IFIFO:  
            printf("FIFO/pipe\n");               
            break;
        case S_IFLNK:  
            printf("symlink\n");                 
            break;
        case S_IFREG:  
            printf("regular file\n");            
            break;
        case S_IFSOCK: 
            printf("socket\n");                  
            break;
        default:       
            printf("unknown?\n");                
            break;
    }
    printf("I-node number:            %ju\n", (uintmax_t) sb.st_ino);
    printf("File size:                %jd bytes\n", (intmax_t) sb.st_size);
    printf("Last file access:         %s", ctime(&sb.st_atime));
    printf("Last file modification:   %s", ctime(&sb.st_mtime));
    return 0;
}