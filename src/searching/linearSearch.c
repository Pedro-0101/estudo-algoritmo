/*
 * Algoritmo Busca Linear (Linear Search)
 * --------------------------------------
 *
 * O que é e para que serve:
 * A Busca Linear (ou Sequencial) é o método mais básico de busca.
 * Serve para encontrar um elemento em uma lista que não possui nenhuma ordem específica.
 *
 * Como funciona:
 * 1. Varredura: Percorre o array do início ao fim, um elemento por vez.
 * 2. Comparação: Compara cada elemento com o valor buscado.
 * 3. Conclusão: Se encontrar, retorna a posição. Se chegar ao fim sem encontrar, indica falha.
 *
 * Pontos Positivos:
 * - Universal: Funciona em qualquer lista (ordenada ou não).
 * - Simplicidade: Código trivial.
 * - Sem Pré-requisitos: Não precisa ordenar os dados antes.
 *
 * Pontos Negativos:
 * - Lento para Grandes Dados: Complexidade O(n). Se o array tiver 1 milhão de itens, pode precisar de 1 milhão de comparações.
 * - Ineficiente: Comparado à busca binária, é muito custoso para buscas repetidas em dados estáticos.
 */

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>

 #define ARRAY_SIZE 1000000

int linearSearch(int array[], int size, int target) {
 for(int i = 0; i<size; i++) {
  if(array[i] == target){
    return i;
  }
 }
 return -1;
}
 
int main() {

  // Alocação dinâmica para evitar Stack Overflow (4MB excede o limite padrão da stack)
  int *array = (int*)malloc(ARRAY_SIZE * sizeof(int));
  if (array == NULL) {
      printf("Erro de alocacao de memoria\n");
      return 1;
  }
  int target;
  int i;

  printf("Inciando a busca linear\n");

  // Inicializa o array com números aleatórios
  srand(time(NULL));
  for (i = 0; i < ARRAY_SIZE; i++) {
    array[i] = rand() % ARRAY_SIZE;
  }

  // Busca o número 42
  target = 42;
  int result = linearSearch(array, ARRAY_SIZE, target);

  if (result != -1) {
    printf("Elemento %d encontrado na posicao %d\n", target, result);
  } else {
    printf("Elemento %d nao encontrado\n", target);
  }

}