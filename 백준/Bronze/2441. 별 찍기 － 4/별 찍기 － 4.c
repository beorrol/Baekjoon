#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = a; i > 0; i--) {
        for (int k = 0; k < a - i; k++) {
            printf(" ");
        }
        for (int j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}