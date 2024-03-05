#include <stdio.h>

int main(void) {
    int test;
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        int a = 0, b = 0;
        int result1 = 0, result2 = 0;
        for (int j = 0; j < 9; j++) {
            scanf("%d %d", &a, &b);
            result1 += a;
            result2 += b;    
        }
        if (result1 > result2) printf("Yonsei\n");
        else if (result1 < result2) printf("Korea\n");
        else printf("Draw\n");   
    }
    return 0;
}