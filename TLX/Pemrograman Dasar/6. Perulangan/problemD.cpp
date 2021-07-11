#include <iostream>
#include <cstdio>
#include <stdlib.h>

int main() {
  int masukan, hasil = 0;
  while (scanf("%d", &masukan) != EOF) {
      printf("%d\n", hasil += masukan);
  }
}