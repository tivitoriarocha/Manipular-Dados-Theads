#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define TAM 10

int vetor[TAM] = {8, 3, 15, 1, 9, 12, 4, 7, 20, 6};

typedef struct {
    int *vetor;
    int tamanho;
} DadosVetor;

DWORD WINAPI somar_elementos(LPVOID arg) {
    DadosVetor *dados = (DadosVetor *)arg;
    int soma = 0;

    for (int i = 0; i < dados->tamanho; i++) {
        soma += dados->vetor[i];
    }

    printf("Thread Soma: soma dos elementos = %d\n", soma);
    return 0;
}

DWORD WINAPI encontrar_maior(LPVOID arg) {
    DadosVetor *dados = (DadosVetor *)arg;
    int maior = dados->vetor[0];

    for (int i = 1; i < dados->tamanho; i++) {
        if (dados->vetor[i] > maior) {
            maior = dados->vetor[i];
        }
    }

    printf("Thread Maior Valor: maior elemento = %d\n", maior);
    return 0;
}

DWORD WINAPI calcular_media(LPVOID arg) {
    DadosVetor *dados = (DadosVetor *)arg;
    int soma = 0;
    float media;

    for (int i = 0; i < dados->tamanho; i++) {
        soma += dados->vetor[i];
    }

    media = (float)soma / dados->tamanho;

    printf("Thread Média: média dos elementos = %.2f\n", media);
    return 0;
}

DWORD WINAPI ordenar_elementos(LPVOID arg) {
    DadosVetor *dados = (DadosVetor *)arg;

    int *copia = (int *)malloc(dados->tamanho * sizeof(int));
    if (copia == NULL) {
        printf("Thread Ordenação: erro ao alocar memória.\n");
        return 1;
    }

    for (int i = 0; i < dados->tamanho; i++) {
        copia[i] = dados->vetor[i];
    }

    for (int i = 0; i < dados->tamanho - 1; i++) {
        for (int j = 0; j < dados->tamanho - 1 - i; j++) {
            if (copia[j] > copia[j + 1]) {
                int temp = copia[j];
                copia[j] = copia[j + 1];
                copia[j + 1] = temp;
            }
        }
    }

    printf("Thread Ordenação: vetor ordenado = ");
    for (int i = 0; i < dados->tamanho; i++) {
        printf("%d ", copia[i]);
    }
    printf("\n");

    free(copia);
    return 0;
}

int main() {
    HANDLE threads[4];
    DadosVetor dados;

    dados.vetor = vetor;
    dados.tamanho = TAM;

    printf("Vetor original: ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n\n");

    threads[0] = CreateThread(NULL, 0, somar_elementos, &dados, 0, NULL);
    threads[1] = CreateThread(NULL, 0, ordenar_elementos, &dados, 0, NULL);
    threads[2] = CreateThread(NULL, 0, encontrar_maior, &dados, 0, NULL);
    threads[3] = CreateThread(NULL, 0, calcular_media, &dados, 0, NULL);

    WaitForMultipleObjects(4, threads, TRUE, INFINITE);

    for (int i = 0; i < 4; i++) {
        CloseHandle(threads[i]);
    }

    return 0;
}