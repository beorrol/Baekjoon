#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 5);
        temp /= 10;
    }

    printf("%d\n", sum);

    return 0;
}