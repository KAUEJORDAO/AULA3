#include <stdio.h>

int main() {
    int idades[5], i, soma = 0, media;
    
   
    for(i = 0; i < 5; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }
    
  
    media = soma / 5;
    printf("A media das idades informadas e: %d\n", media);
    
  
    printf("As idades maiores que 18 anos sao:");
    for(i = 0; i < 5; i++) {
        if(idades[i] > 18) {
            printf("%d ", idades[i]);
        }
    }
    
    printf("\n");
    
    return 0;
}

