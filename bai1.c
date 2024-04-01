#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int laBoiCua7(int n) {
  return n % 7 == 0;
}

// Hàm in ra các số nguyên có 2 chữ số và là bội của 7
void inBoiCua7() {
  int i;
  for (i = 10; i <= 99; i++) {
    if (laBoiCua7(i)) {
      printf("%d ", i);
    }
  }
}

int main() {
  inBoiCua7();
  return 0;
}