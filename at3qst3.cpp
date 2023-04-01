#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("...\n", numero);
    
    for(i = numero; i >= 0; i--) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}

