#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int arr[10];
  
  srand( time(NULL) );

  int i;
  for (i = 0; i < 9; i++) {
    arr[i] = rand();
  }

  arr[9] = 0;

  for (i = 0; i < 10; i++) {
    printf("%d\n", arr[i]);
  }

  int arrayz[10];
  int *p = arr + 9;

  for (i = 0; i < 10; i++) {
    *(arrayz + i) = *(p - i);
  }

  for (i = 0; i < 10; i++) {
    printf("%d\n", arrayz[i]);
  }
  
  return 0;
  
}
