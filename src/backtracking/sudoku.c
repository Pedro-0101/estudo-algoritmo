/*
 * Solucionador de Sudoku (Sudoku Solver - Backtracking)
 * -----------------------------------------------------
 *
 * O que é e para que serve:
 * Algoritmo para resolver quebra-cabeças de Sudoku (preencher grade 9×9 com números 1-9 sem repetir
 * na mesma linha, coluna ou sub-grade 3×3).
 * Exemplo clássico de backtracking aplicado a problemas de satisfação de restrições.
 *
 * Como funciona:
 * 1. Busca Célula Vazia: Encontra a próxima célula vazia no tabuleiro.
 * 2. Tentativa: Tenta colocar números de 1 a 9 nessa célula.
 * 3. Validação: Para cada número, verifica se é válido (não viola regras do Sudoku).
 * 4. Recursão: Se válido, avança recursivamente para a próxima célula vazia.
 * 5. Backtrack: Se nenhum número funciona (ou falha adiante), volta e tenta outro número na célula anterior.
 *
 * Pontos Positivos:
 * - Garantia de Solução: Se existe solução, o backtracking a encontrará.
 * - Aplicável: Mesma técnica funciona para variações (Sudoku 16×16, Killer Sudoku, etc).
 *
 * Pontos Negativos:
 * - Pode Ser Lento: Para Sudokus muito difíceis, pode demorar. Complexidade exponencial no pior caso.
 * - Otimizações Necessárias: Versões eficientes usam heurísticas (escolher célula com menos opções primeiro).
 */
