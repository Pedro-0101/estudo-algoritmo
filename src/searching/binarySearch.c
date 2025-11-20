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
