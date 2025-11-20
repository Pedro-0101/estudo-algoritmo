/*
 * Algoritmo de Huffman
 * --------------------
 *
 * O que é e para que serve:
 * O algoritmo de Huffman é um método popular de compressão de dados sem perdas (lossless).
 * Ele é utilizado para reduzir o tamanho de arquivos de texto ou dados binários, atribuindo
 * códigos binários de comprimentos variáveis aos caracteres, baseando-se na frequência
 * com que eles aparecem.
 *
 * Como funciona:
 * 1. Contagem de Frequência: O algoritmo conta quantas vezes cada caractere aparece no dado original.
 * 2. Construção da Árvore: Cria-se uma árvore binária (Árvore de Huffman) onde:
 *    - As folhas representam os caracteres.
 *    - Caracteres mais frequentes ficam mais próximos da raiz (códigos mais curtos).
 *    - Caracteres menos frequentes ficam mais longe da raiz (códigos mais longos).
 * 3. Codificação: Percorre-se a árvore da raiz até a folha para determinar o código de cada caractere
 *    (ex: esquerda = 0, direita = 1).
 *
 * Pontos Positivos:
 * - Compressão sem perdas: O dado original é recuperado exatamente como era.
 * - Eficiência: Muito eficaz para dados onde há grande variação na frequência dos caracteres.
 * - Simplicidade: Conceito relativamente simples e fácil de implementar.
 * - Prefix-free: Nenhum código é prefixo de outro, o que elimina ambiguidade na decodificação.
 *
 * Pontos Negativos:
 * - Overhead da Tabela/Árvore: É necessário armazenar ou transmitir a tabela de códigos ou a árvore
 *   junto com os dados comprimidos para que a decodificação seja possível.
 * - Duas passadas (na versão estática): Requer ler os dados duas vezes (uma para contar frequências,
 *   outra para comprimir), o que pode ser lento para grandes volumes de dados em streaming (embora
 *   exista o Huffman Adaptativo para mitigar isso).
 * - Dependência da Distribuição: Se todos os caracteres tiverem frequências muito parecidas,
 *   a compressão não será significativa.
 */
