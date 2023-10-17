#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void func(){
    int stat;
    printf("I'm in func\n");
    wait(&stat);
    if(WIFEXITED(stat)){
        printf("exited, status=%d\n", WEXITSTATUS(stat));
    }else if (WIFSIGNALED(stat)) {
        printf("killed by signal %d\n", WTERMSIG(stat));
    }
}
int main(){
    pid_t pid, wpid;
    pid = fork();
    if(pid < 0){
        printf("Fork fail\n");
    }else if(pid == 0){
        printf("I'm child process. My PID = %d, my parent = %d\n", getpid(), getppid());
        //sleep(60); // sleep 60 second
    }else{
        printf("I'm parent process. My PID = %d, and PID's child ps = %d\n", getpid(), pid);
        printf("my parent PID = %d\n", getppid());
        signal(SIGCHLD, func);
        while(1);
    }
    return 0;
}