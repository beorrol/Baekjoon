#include <stdio.h>
#include <string.h>

int main(void) {
    char S[52];
    fgets(S, 52, stdin);
    
    for (int i = 0; i < 52; i++) {
        if (S[i] == '\n') {
            S[i] = '\0';
            break;
        }
    }
    
    int len = strlen(S);
    
    if (len <= 2 || (S[0] != '\"' || S[len-1] != '\"')) {
        printf("CE");
    } else {
        for (int i = 1; i < len - 1; i++) {
            printf("%c", S[i]);
        }
    }
    
    return 0;
}