/*
 * Algoritmo MergeSort (Ordenação por Mistura)
 * -------------------------------------------
 *
 * O que é e para que serve:
 * O MergeSort é um algoritmo de ordenação clássico baseado na estratégia "Dividir para Conquistar".
 * É conhecido por sua estabilidade e desempenho previsível.
 *
 * Como funciona:
 * 1. Divisão: Divide o array recursivamente ao meio até que cada sub-array tenha apenas um elemento.
 * 2. Conquista (Merge): Combina (mistura) os sub-arrays ordenados para formar novos sub-arrays ordenados maiores.
 *    Durante a mistura, compara-se os elementos de cada metade e insere-se o menor na posição correta.
 *
 * Pontos Positivos:
 * - Desempenho Garantido: Tem complexidade O(n log n) em todos os casos (pior, médio e melhor).
 * - Estável: Mantém a ordem original de elementos com valores iguais (importante para ordenações múltiplas).
 * - Bom para Listas Encadeadas: Funciona muito bem com estruturas de dados que não permitem acesso aleatório rápido.
 *
 * Pontos Negativos:
 * - Uso de Memória: Não é "in-place" para arrays. Requer O(n) de memória auxiliar para armazenar os dados
 *   durante a etapa de mistura.
 * - Overhead: Para arrays pequenos, pode ser mais lento que algoritmos simples (como Insertion Sort) devido
 *   ao overhead da recursão e cópia de memória.
 */
