#include <stdio.h>

int main(void) {
    int a[5];
    int result = 0;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 5; i++) {
        result += a[i];
    }
    printf("%d", result);
    return 0;
}