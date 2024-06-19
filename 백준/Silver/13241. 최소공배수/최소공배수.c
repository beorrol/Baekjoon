#include <stdio.h>

long long int gcd(long long int a,long long int b) {
    long long int temp;
    while (b != 0) {
        temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void) {
    long long int a,b;
    scanf("%lld %lld", &a, &b);
    long long int lcm = (a * b) / gcd(a,b);
    printf("%lld", lcm);
    return 0;
}