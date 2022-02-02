#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "recursividade.h"

void primeiraPassada(char palavra[], int tamanho){
    if (tamanho >= 0){ // primitiva
        char letra = palavra[tamanho];
        if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra<= 'Z')){ //primitiva
            palavra[tamanho] = letra + 3;
        }
        else {
            palavra[tamanho] = letra; 
        }
        primeiraPassada(palavra, tamanho - 1); //?
    }
}
/* equação de recorrencia: 
T(n) = T(n - 1);
T(0) = 1;

T(n) = O(n)
*/

void segundaPassada(char palavra[], int inicio, int fim){
    char aux;
    if (inicio < fim){
        aux = palavra[inicio];
        palavra[inicio] = palavra[fim];
        palavra[fim] = aux;
        segundaPassada(palavra, inicio + 1, fim - 1);
    }
}
/* equação de recorrencia: 
T(n) = T(n + 1) + T(n - 1);
T(1) = 1
T(n) = O(n²)
*/

void terceiraPassada(char palavra[], int meio, int final){
    if(meio < final){
        if (palavra[meio] > 31 && palavra[meio] < 127){
            char letra = palavra[meio];
            palavra[meio] = letra - 1;
        }
        terceiraPassada(palavra, meio + 1, final);
    }
}
/* equação de recorrencia: 
T(n) = T(n/2 + 1);
T(n) = O(n)
*/

void imprime(char palavra[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%c", palavra[i]);
    }
    printf("\n");
}