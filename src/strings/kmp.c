/*
 * Algoritmo KMP (Knuth-Morris-Pratt - Busca de Padrão em String)
 * --------------------------------------------------------------
 *
 * O que é e para que serve:
 * KMP é um algoritmo eficiente para buscar um padrão (substring) dentro de um texto.
 * Ao contrário da busca ingênua (que volta ao início após falha), o KMP nunca retrocede no texto,
 * usando informações do próprio padrão para pular comparações desnecessárias.
 * Usado em editores de texto (Ctrl+F), bioinformática (busca de DNA), etc.
 *
 * Como funciona:
 * 1. Pré-processamento (LPS): Constrói um array LPS (Longest Proper Prefix which is also Suffix)
 *    que indica, para cada posição do padrão, qual o tamanho do maior prefixo que também é sufixo.
 * 2. Busca: Percorre o texto. Quando há mismatch (caracteres diferentes):
 *    - Usa o array LPS para determinar quantas posições pode "pular" no padrão sem perder matches.
 *    - Nunca retrocede no texto (índice do texto só avança).
 *
 * Pontos Positivos:
 * - Eficiência: O(n + m) onde n é o tamanho do texto e m do padrão. Linear!
 * - Sem Retrocesso: Ideal para streams de dados (não precisa reler o texto).
 *
 * Pontos Negativos:
 * - Complexidade de Entendimento: O array LPS e a lógica de pulos não são intuitivos.
 * - Overhead: Para padrões muito curtos ou textos pequenos, a busca ingênua pode ser mais rápida na prática.
 */
