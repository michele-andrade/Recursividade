#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursividade.h"

int main(){
    int casos;
    printf("DIGITE A QUANTIDADE DE PALAVRAS: \n");
    scanf("%d", &casos);

    for(int i = 0; i < casos; i++){
        getchar();
        printf("Digite a palavra:");
        char palavra[1000];
        fgets(palavra, 1000, stdin);
        int tamanho = strlen(palavra);
        printf("%d", tamanho);
        primeiraPassada(palavra, tamanho);
        imprime(palavra, tamanho);
        segundaPassada(palavra, 0, tamanho - 2);
        imprime(palavra, tamanho);
        terceiraPassada(palavra, ((tamanho - 1)/2), tamanho - 1);
        imprime(palavra, tamanho);
    }
    return 0;
}