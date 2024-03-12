#include <stdio.h>
#include <string.h> // strcmp() 함수를 사용하기 위해 추가

int main(void) {
    char str[101];
    scanf("%s", str);
    if (strcmp(str, "NLCS") == 0) printf("North London Collegiate School\n");
    else if (strcmp(str, "BHA") == 0) printf("Branksome Hall Asia\n");
    else if (strcmp(str, "KIS") == 0) printf("Korea International School\n");
    else if (strcmp(str, "SJA") == 0) printf("St. Johnsbury Academy\n");
    return 0;
}