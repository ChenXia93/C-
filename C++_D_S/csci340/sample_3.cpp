#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t  pid;
    int    i;

    fork();
    fork();
    fork();

    pid = getpid();
    for (i = 1; i <= 100; i++) {
        printf("This line is from  [Process id: %d] with value = %d\n", pid, i);

    }

    return 0;
}
