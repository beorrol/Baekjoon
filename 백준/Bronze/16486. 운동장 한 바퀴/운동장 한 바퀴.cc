#include <stdio.h>

int main(void) {
    int a,b;
    scanf("%d\n%d", &a, &b);
    double rr = 2 * b * 3.141592;
    printf("%lf", (double)(a + a) + rr);
    return 0;
}