#include <stdio.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);  // 사용자로부터 정수를 입력 받음
    int result = (a * 0.8) + ((a * 0.2) * 0.78); 
    printf("%d %d", (int)(a * 0.78), result);
    return 0;
}
