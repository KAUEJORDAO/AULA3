#include <stdio.h>

int main() {
    int i, numero, soma = 0;
    
    printf("Digite numeros inteiros ate que a soma seja igual ou maior que 30:\n");
    
    while(soma < 30) {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    
    printf("A soma dos numeros informados foi igual ou maior que 30 \n");
    
    printf("Resultado da soma = %d", soma);
    
    return 0;
}

