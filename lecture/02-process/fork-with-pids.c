#include <stdio.h>
#include <unistd.h>

int main() {
  // step 1: print PID and PPID
  printf("Start PID=%d, parent PID=%d\n", getpid(), getppid());

  int fork_value = fork();

  if (fork_value == 0) {
    printf("CHILD: PID=%d, parent PID=%d\n", getpid(), getppid());
  } else {
    printf("PARENT: PID=%d, child PID=%d\n", getpid(), fork_value);
  }
}
