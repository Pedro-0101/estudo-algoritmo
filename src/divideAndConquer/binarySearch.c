/*
 * Busca Binária (Binary Search - Dividir para Conquistar)
 * -------------------------------------------------------
 *
 * O que é e para que serve:
 * (Veja também: searching/binarySearch.c para detalhes de busca)
 * Do ponto de vista de Dividir para Conquistar, a busca binária é um exemplo perfeito:
 * divide o problema (buscar em array) em subproblemas menores (buscar na metade esquerda OU direita).
 *
 * Como funciona:
 * 1. Dividir: Divide o array ao meio.
 * 2. Conquistar: Compara o elemento do meio com o alvo. Se igual, achou. Se não:
 *    - Se alvo < meio: Conquista recursivamente a metade esquerda.
 *    - Se alvo > meio: Conquista recursivamente a metade direita.
 * 3. Combinar: Não há etapa de combinação (a resposta vem diretamente da recursão).
 *
 * Pontos Positivos:
 * - Eficiência: O(log n) - muito rápido.
 * - Paradigma Clássico: Exemplo didático perfeito de Dividir para Conquistar.
 *
 * Pontos Negativos:
 * - (Mesmos da busca - veja searching/binarySearch.c)
 */
