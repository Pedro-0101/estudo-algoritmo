/*
 * Algoritmo QuickSort (Ordenação Rápida)
 * --------------------------------------
 *
 * O que é e para que serve:
 * O QuickSort é um dos algoritmos de ordenação mais eficientes e populares.
 * Utiliza a estratégia "Dividir para Conquistar". É amplamente usado em bibliotecas padrão
 * de linguagens de programação (como o qsort em C).
 *
 * Como funciona:
 * 1. Escolha do Pivô: Seleciona-se um elemento do array (pivô).
 * 2. Particionamento: Reorganiza o array de forma que todos os elementos menores que o pivô
 *    fiquem à esquerda dele, e todos os maiores fiquem à direita.
 * 3. Recursão: Aplica-se o mesmo processo recursivamente às sub-listas da esquerda e da direita.
 *
 * Pontos Positivos:
 * - Rapidez: Na média, é muito rápido (O(n log n)) e geralmente supera o MergeSort e HeapSort na prática
 *   devido à boa localidade de referência (cache).
 * - In-place: Requer pouco espaço extra de memória (apenas para a pilha de recursão), ao contrário do MergeSort.
 *
 * Pontos Negativos:
 * - Pior Caso: No pior caso (array já ordenado ou reverso, dependendo da escolha do pivô),
 *   a complexidade cai para O(n^2). (Isso pode ser mitigado com escolha aleatória do pivô).
 * - Instável: Não garante a manutenção da ordem relativa de elementos iguais.
 */
