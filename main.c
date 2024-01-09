#include <stdio.h>
#include <string.h>

void revstr(char *input) {
  int x, len, temp;
  len = strlen(input);

  for (x = 0; x < len / 2; x++) {
    temp = input[x];
    input[x] = input[len - x - 1];
    input[len - x - 1] = temp;
  }
}

int main() {
  char z[50];

  printf("Input what you wish to reverse: ");
  fgets(z, 50, stdin);

  printf("The sequence reversed is: ");
  revstr(z);
  printf("%s", z);

  return 0;
}
