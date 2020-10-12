#include <stdio.h>

void fillbuffer(long long *arr, unsigned len) {
  int i;
  for (i = 0; i < len; i++) {
    arr[i] = 1;
  }
}

int main() {
  long long *arr = NULL;
  fillbuffer(arr, 16);
  return 0;
}

