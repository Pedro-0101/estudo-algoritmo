/*
 * Problema da Mochila (Knapsack Problem)
 * --------------------------------------
 *
 * O que é e para que serve:
 * O problema da mochila é um problema clássico de otimização combinatória.
 * Dado um conjunto de itens, cada um com peso e valor, e uma mochila com capacidade limitada,
 * o objetivo é selecionar itens que maximizem o valor total sem exceder a capacidade.
 * Usado em alocação de recursos, orçamento, criptografia e muito mais.
 *
 * Como funciona (0/1 Knapsack com DP):
 * 1. Tabela DP: Cria-se uma matriz dp[i][w] onde i é o item e w é a capacidade.
 * 2. Decisão: Para cada item, decide-se:
 *    - NÃO pegar: dp[i][w] = dp[i-1][w]
 *    - PEGAR (se couber): dp[i][w] = max(dp[i-1][w], valor[i] + dp[i-1][w-peso[i]])
 * 3. Resultado: dp[n][capacidade] contém o valor máximo possível.
 *
 * Pontos Positivos:
 * - Solução Ótima: Garante encontrar a melhor combinação de itens.
 * - Versátil: Aplicável a diversos problemas de otimização (corte de barras, particionamento, etc).
 *
 * Pontos Negativos:
 * - Complexidade: O(n * W) onde W é a capacidade. Para capacidades muito grandes, pode ser lento.
 * - Espaço: Requer uma matriz de tamanho n × W (pode ser otimizado para O(W) usando apenas 1D).
 * - NP-Completo: A versão geral (sem DP) é NP-completo, então DP é pseudo-polinomial.
 */
