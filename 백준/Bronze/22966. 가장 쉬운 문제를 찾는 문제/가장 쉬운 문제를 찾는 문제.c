#include <stdio.h>

int main(void) {
    int n;
    char s[5][11];
    int num[5];
    int min = 100000000;
    int min_index = -1;

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %d", s[i], &num[i]);
        if (num[i] < min) {
            min = num[i];
            min_index = i;
        }
    }
    printf("%s\n", s[min_index]);
    return 0;
}
