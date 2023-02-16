#include <stdio.h>

int skip_next_line(int condition) {
  if (condition) {
    return 1;
  }
  return 0;
}

int main() {
  int a = 0;
  if (!skip_next_line(a)) {
    printf("This line will be executed\n");
  }
  printf("This line will be skipped\n");
  printf("This line will be executed\n");
  return 0;
}
