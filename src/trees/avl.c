/*
 * Árvore AVL (Adelson-Velsky e Landis)
 * ------------------------------------
 *
 * O que é e para que serve:
 * A AVL é uma Árvore Binária de Busca (BST) *auto-balanceada*.
 * Ela resolve o problema da BST comum (que pode ficar "torta" ou degenerada).
 * Serve para garantir que as operações de busca, inserção e remoção sejam SEMPRE rápidas,
 * mantendo a altura da árvore controlada.
 *
 * Como funciona:
 * 1. Fator de Balanceamento: Para cada nó, calcula-se a diferença de altura entre a subárvore esquerda e direita.
 *    Esse fator deve ser sempre -1, 0 ou +1.
 * 2. Rotações: Se, após uma inserção ou remoção, o fator de algum nó sair desse intervalo (ex: virar +2 ou -2),
 *    a árvore realiza operações chamadas "rotações" (simples ou duplas) para reorganizar os nós e restaurar o equilíbrio.
 *
 * Pontos Positivos:
 * - Garantia de Desempenho: Garante complexidade O(log n) no pior caso para todas as operações.
 * - Busca Rápida: Como é estritamente balanceada, é excelente para cenários com muitas leituras (buscas).
 *
 * Pontos Negativos:
 * - Overhead na Escrita: As operações de inserção e remoção são mais lentas que numa BST comum (ou Red-Black)
 *   devido à necessidade frequente de rebalanceamento (rotações).
 * - Complexidade: Implementação mais difícil e propensa a erros devido à lógica das rotações.
 */
