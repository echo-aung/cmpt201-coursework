
#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main() {
  printf("Please enter some text: ");

  // set up getline()
  char *input_line = NULL;
  size_t str_length = 0;
  ssize_t nread;
  nread = getline(&input_line, &str_length, stdin);

  if (nread != -1) {
    printf("You entered: %s\n", input_line);
  }

  // parse string
  const char *delim = " ";
  char *save_ptr;
  char *token;

  token = strtok_r(input_line, delim, &save_ptr);
  printf("Tokens: \n");

  while (token != NULL) {
    printf("\t %s\n", token);
    token = strtok_r(NULL, delim, &save_ptr);
  }

  free(input_line);
}
