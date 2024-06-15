#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    
    // 상단 부분
    for (int i = 0; i < a; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int k = 2 * (a - i - 1); k > 0; k--) {
            printf(" ");
        }
        for (int h = 0; h <= i; h++) {
            printf("*");
        }
        printf("\n");
    }
    
    // 하단 부분
    for (int i = a - 2; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int k = 2 * (a - i - 1); k > 0; k--) {
            printf(" ");
        }
        for (int h = 0; h <= i; h++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}