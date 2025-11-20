/*
 * Codificação de Huffman (Huffman Coding - Algoritmo Guloso)
 * ----------------------------------------------------------
 *
 * O que é e para que serve:
 * (Veja também: dataCompression/huffman.c para detalhes de compressão)
 * Do ponto de vista de algoritmos gulosos, Huffman é um exemplo clássico de como a escolha gulosa
 * (sempre combinar os dois nós de menor frequência) leva à solução ótima.
 *
 * Como funciona (perspectiva gulosa):
 * 1. Min-Heap: Insere todos os caracteres com suas frequências em uma fila de prioridade mínima (heap).
 * 2. Escolha Gulosa: Remove os 2 nós de menor frequência.
 * 3. Combinação: Cria um novo nó interno com frequência = soma das frequências dos 2 nós removidos.
 * 4. Repetição: Insere o novo nó de volta no heap e repete até sobrar apenas 1 nó (a raiz).
 *
 * Pontos Positivos:
 * - Ótimo: A estratégia gulosa garante a árvore de codificação com menor comprimento médio.
 * - Eficiência: O(n log n) usando heap.
 *
 * Pontos Negativos:
 * - (Mesmos da compressão - veja dataCompression/huffman.c)
 */
