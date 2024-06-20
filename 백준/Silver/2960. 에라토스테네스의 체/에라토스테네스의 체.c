#include <stdio.h>

int main(void) {
    int a,b, cnt = 0;
    int arr[1001] = {0,};
    arr[0]=arr[1]=1;
    scanf("%d %d", &a, &b);
    for (int i = 2; i <= a; i++) {
        for (int j = i; j <= a; j+=i) {
            if(arr[j]) continue;
            arr[j] = 1;
            cnt++;
            if(cnt == b) printf("%d", j);
        }
    }
    return 0;
}