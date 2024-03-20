#include <stdio.h>
#include <string.h>

int main(void) {
    char c[101];
	scanf("%s", c);

    for(int i = 0; i <= strlen(c) / 2; i++) {
        if(c[i] != c[strlen(c) - i - 1]) {
            printf("0");
            return 0;
        }
    }

  printf("1");

  return 0;
}