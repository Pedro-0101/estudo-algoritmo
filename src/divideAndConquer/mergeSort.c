/*
 * MergeSort (Dividir para Conquistar)
 * -----------------------------------
 *
 * O que é e para que serve:
 * (Veja também: sorting/mergesort.c para detalhes de ordenação)
 * MergeSort é o exemplo mais clássico de Dividir para Conquistar aplicado à ordenação.
 *
 * Como funciona:
 * 1. Dividir: Divide o array recursivamente ao meio até ter arrays de 1 elemento.
 * 2. Conquistar: Arrays de 1 elemento já estão "ordenados".
 * 3. Combinar (Merge): Mescla dois sub-arrays ordenados em um único array ordenado maior,
 *    comparando elementos e inserindo o menor primeiro.
 *
 * Pontos Positivos:
 * - Paradigma Perfeito: Demonstra claramente as 3 etapas (dividir, conquistar, combinar).
 * - Desempenho Garantido: O(n log n) sempre.
 *
 * Pontos Negativos:
 * - (Mesmos da ordenação - veja sorting/mergesort.c)
 */
