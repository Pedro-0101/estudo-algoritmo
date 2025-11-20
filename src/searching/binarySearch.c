/*
 * Algoritmo Busca Binária (Binary Search)
 * ---------------------------------------
 *
 * O que é e para que serve:
 * A Busca Binária é um algoritmo eficiente para encontrar um item em uma lista *ordenada*.
 * É muito mais rápida que a busca linear para grandes conjuntos de dados.
 *
 * Como funciona:
 * 1. Intervalo: Começa considerando o array inteiro.
 * 2. Meio: Verifica o elemento do meio do intervalo atual.
 * 3. Comparação:
 *    - Se o elemento do meio for o buscado: Sucesso!
 *    - Se o buscado for menor que o meio: Descarta a metade direita e repete a busca na metade esquerda.
 *    - Se o buscado for maior que o meio: Descarta a metade esquerda e repete a busca na metade direita.
 * 4. Repetição: O processo continua até encontrar o elemento ou o intervalo ficar vazio.
 *
 * Pontos Positivos:
 * - Eficiência: Complexidade O(log n). Para 1 milhão de itens, requer no máximo cerca de 20 comparações.
 * - Simples: Lógica de divisão e conquista direta.
 *
 * Pontos Negativos:
 * - Requer Ordenação: O array DEVE estar ordenado previamente. Se não estiver, o algoritmo não funciona.
 *   (O custo de ordenar pode ser maior que o da busca se for feita apenas uma vez).
 * - Acesso Aleatório: Precisa de acesso direto aos índices (ruim para listas encadeadas simples).
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define ARRAY_SIZE 1000000

 int binarySearch(int array[], int size, int target, int rounds) {
  int left = 0;
  int right = size - 1;

  while(left <= right ) {
    int mid = left + (right - left) / 2;

    if(array[mid] == target) {
      printf("Encontrado na iteracao %d: %d \n",   rounds, array[mid]);
      return mid;
    }

    if(array[mid] < target) {
      printf("Maior que o meio na iteracao %d: %d \n", rounds, array[mid]);
      left = mid + 1;
    } else {
      printf("Menor que o meio na iteracao %d: %d \n", rounds, array[mid]);
      right = mid - 1;
    }
    rounds++;
  }

  return -1;
 }

 int main() {
  
  int target = 663999;
  int i = 0;

  printf("Inciando a busca binaria\n");

  // Inicializa array com numeros ordenados
  int *array = (int*)malloc(ARRAY_SIZE * sizeof(int));
  if (array == NULL) {
    printf("Erro de alocacao de memoria\n");
    return 1;
  }

  for (i = 0; i < ARRAY_SIZE; i++) {
    array[i] = i*3;
  }
  
  int result = binarySearch(array, ARRAY_SIZE, target, 0);

  if(result != -1) {
    printf("Elemento %d encontrado na posicao %d\n", target, result);
  } else {
    printf("Elemento %d nao encontrado\n", target);
  }

  free(array);
 }
