#include <stdio.h>
#include <unistd.h>

int main() {
  fork();
  for (int i = 0; i < 40; i++) {
    printf("Sleeping\n");
    sleep(1);
  }
  printf("Done\n");
}
