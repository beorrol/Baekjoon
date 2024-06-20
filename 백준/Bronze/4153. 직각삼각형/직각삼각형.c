#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void) {
    int arr[3];
    while (1) {
        scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
        
        if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) break;
        
        sort(arr, 3);
        
        if ((arr[0] * arr[0] + arr[1] * arr[1]) == (arr[2] * arr[2])) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}