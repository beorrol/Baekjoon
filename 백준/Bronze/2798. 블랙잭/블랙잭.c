#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int cards[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &cards[i]);
        
    int closest_sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            for (int k = j + 1; k < N; k++) {
                int temp_sum = cards[i] + cards[j] + cards[k];
                if (closest_sum < temp_sum && temp_sum <= M)
                    closest_sum = temp_sum;
            }
        }
    }
    printf("%d", closest_sum);
    return 0;
}