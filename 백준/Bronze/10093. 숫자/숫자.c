#include <stdio.h>

int main(void) {
    unsigned long long int a, b;
    scanf("%llu %llu", &a, &b);
    
    if (a == b) {
        printf("0\n");
    } else if (a > b) {
        printf("%llu\n", a - b - 1);
        for (unsigned long long int i = b + 1; i < a; i++) {
            printf("%llu ", i);
        }
    } else {
        printf("%llu\n", b - a - 1);
        for (unsigned long long int i = a + 1; i < b; i++) {
            printf("%llu ", i);
        }
    }
    
    return 0;
}