#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    int arr[101];
    for (int i = 0; i < a; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < arr[i]; j++) {
            printf("=");
        }
        printf("\n");
    }
    return 0;
}