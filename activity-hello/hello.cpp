#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int main () {
  char hostname[HOST_NAME_MAX];
  gethostname(hostname, HOST_NAME_MAX);
  printf("hostname: %s", hostname);
  return 0;
}
