#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sys/wait.h>
using namespace std;

int main(int argc, char *argv[])

{
    int number = 2;
    int i;
    int pid;

    pid=fork();
    for(i = 0; i < number; i++){
        cout<<pid<<endl;
    }
}
