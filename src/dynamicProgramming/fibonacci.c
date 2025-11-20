/*
 * Fibonacci com Programação Dinâmica
 * ----------------------------------
 *
 * O que é e para que serve:
 * A sequência de Fibonacci é um problema clássico onde cada número é a soma dos dois anteriores (0, 1, 1, 2, 3, 5, 8...).
 * A Programação Dinâmica (DP) é uma técnica que resolve problemas complexos quebrando-os em subproblemas menores
 * e armazenando os resultados para evitar recalcular (memoization).
 *
 * Como funciona:
 * 1. Abordagem Recursiva Ingênua: fib(n) = fib(n-1) + fib(n-2). Muito lenta (O(2^n)) pois recalcula os mesmos valores.
 * 2. Memoization (Top-Down): Usa recursão mas armazena resultados já calculados em uma tabela/array.
 * 3. Tabulação (Bottom-Up): Constrói a solução iterativamente do menor para o maior, preenchendo uma tabela.
 *    Exemplo: dp[0]=0, dp[1]=1, dp[i]=dp[i-1]+dp[i-2].
 *
 * Pontos Positivos:
 * - Eficiência: Reduz complexidade de O(2^n) para O(n) com espaço O(n) ou até O(1) otimizado.
 * - Evita Recomputação: Cada subproblema é resolvido apenas uma vez.
 *
 * Pontos Negativos:
 * - Uso de Memória: A versão com tabela usa O(n) de espaço (mas pode ser otimizada para O(1) guardando só os 2 últimos).
 * - Overhead: Para problemas muito simples, pode adicionar complexidade desnecessária.
 */
