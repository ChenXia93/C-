#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/wait.h>

int main(int argc, char *argv[])

{
    int number = 2;
    int i;
    int pid;

    pid=fork();

    if (pid!=0){
        int child_status;
        printf("Hello from parent\n");
        waitpid(pid, &child_status, 0); // Waits for child to end
        printf("Child result %d\n", WEXITSTATUS(child_status));

    }

    else {
        sleep (3);
        int i;

        printf("I am the child\n");

        printf("my pid=%d\n", getpid());

        printf("and my parent pid=%d\n", getppid());

    }

}