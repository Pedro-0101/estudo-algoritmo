/*
 * Problema das N Rainhas (N-Queens Problem)
 * -----------------------------------------
 *
 * O que é e para que serve:
 * Problema clássico de backtracking (retrocesso).
 * Objetivo: Colocar N rainhas em um tabuleiro de xadrez N×N de forma que nenhuma rainha ataque outra
 * (mesma linha, coluna ou diagonal).
 * Usado para ensinar backtracking e em problemas de satisfação de restrições (CSP).
 *
 * Como funciona:
 * 1. Tentativa: Coloca uma rainha na primeira coluna da linha atual.
 * 2. Verificação: Checa se a posição é segura (não ataca outras rainhas já colocadas).
 * 3. Recursão: Se seguro, avança para a próxima linha recursivamente.
 * 4. Backtrack: Se não houver posição segura na linha atual (ou falha adiante), volta (backtrack)
 *    e tenta outra posição na linha anterior.
 *
 * Pontos Positivos:
 * - Solução Completa: Encontra todas as soluções possíveis (ou verifica que não há solução).
 * - Paradigma Fundamental: Backtracking é essencial para muitos problemas (Sudoku, labirintos, etc).
 *
 * Pontos Negativos:
 * - Lento: Complexidade exponencial O(N!) no pior caso. Para N grande, é impraticável sem otimizações.
 * - Força Bruta Inteligente: Ainda é uma busca exaustiva, apenas poda ramos inválidos cedo.
 */
