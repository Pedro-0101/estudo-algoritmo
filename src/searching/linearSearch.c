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
