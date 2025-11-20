/*
 * Algoritmo LZ77 (Lempel-Ziv 77)
 * ------------------------------
 *
 * O que é e para que serve:
 * O LZ77 é um algoritmo de compressão sem perdas baseado em dicionário deslizante (sliding window).
 * É a base para muitos formatos populares como ZIP, GZIP e PNG (via DEFLATE).
 * Ele substitui ocorrências repetidas de dados por referências a uma única cópia desses dados
 * vista anteriormente no fluxo de entrada não comprimido.
 *
 * Como funciona:
 * 1. Janela Deslizante: Mantém uma "janela" sobre os dados já processados (dicionário) e os dados
 *    que estão por vir (buffer de busca).
 * 2. Busca de Correspondência: Para a sequência atual no buffer, procura-se a maior correspondência
 *    dentro da janela de dados já processados.
 * 3. Codificação: Se uma correspondência é encontrada, ela é codificada como um par (distância, comprimento),
 *    indicando "volte X caracteres e copie Y caracteres". Se não, o caractere literal é emitido.
 *
 * Pontos Positivos:
 * - Descompressão Rápida: A descompressão é muito rápida e simples, pois basta copiar dados já decodificados.
 * - Adaptativo: Não requer conhecimento prévio das estatísticas dos dados; constrói o dicionário dinamicamente.
 * - Universal: Funciona bem para uma ampla gama de tipos de dados (texto, código fonte, binários repetitivos).
 *
 * Pontos Negativos:
 * - Busca Lenta na Compressão: A etapa de encontrar a maior correspondência na janela pode ser computacionalmente
 *   intensiva (lenta) se não otimizada.
 * - Eficiência Limitada pela Janela: A capacidade de compressão é limitada pelo tamanho da janela deslizante;
 *   repetições que ocorreram muito atrás (fora da janela) não são aproveitadas.
 */
