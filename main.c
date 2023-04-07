/*
Implemente uma função recursiva para resolver o seguinte problema:

dado um vetor ordenado com n números inteiros positivos e um outro número inteiro positivo x, determine se existem ou não dois elementos cuja soma é igual a x.

Entrada:
8
2 4 5 8 9 12 15 21
10

Saída:
SIM

Entrada:
8
2 4 5 8 9 12 15 21
15

Saída:
NAO
*/

#include <stdio.h>

int existe_soma(int vet[], int ini, int fim, int x){
    if (ini >= fim) {
        return 0;
    }
    if (vet[ini] + vet[fim] < x) {
        return existe_soma(vet, ini+1, fim, x);
    }
    else if (vet[ini] + vet[fim] > x) {
        return existe_soma(vet, ini, fim-1, x);
    }
    else {
        return 1;
    }
}


int main(){
    int n, x;
    scanf("%d", &n);
    int vetor[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    scanf("%d", &x);
    if(existe_soma(vetor, 0, n - 1, x)) printf("SIM");
    else printf("NAO");
}