#include <stdio.h>

int main() {
    int i;
    
    printf("Contagem progressiva e regressiva:\n");
    
    for(i = 0; i <= 20; i++) {
        if(i <= 10) {
            printf("%d ", i);
        } else {
            printf("%d ", 20 - i);
        }
    }
    
    printf("\n");
    
    return 0;
}

