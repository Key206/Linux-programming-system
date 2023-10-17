#include<stdio.h>
#include<unistd.h>

int main(){
    // this is a template to use fork()
    pid_t pid;
    pid = fork();
    if(pid < 0){
        printf("Fork fail\n");
    }else if(pid == 0){
        printf("I'm child process. My PID = %d\n", getpid());
    }else{
        printf("I'm parent process. My PID = %d, and PID's child ps = %d\n", getpid(), pid);
    }
    return 0;
}