/*
 * Algoritmo DFS (Depth-First Search - Busca em Profundidade)
 * ----------------------------------------------------------
 *
 * O que é e para que serve:
 * A Busca em Profundidade é um algoritmo para percorrer ou buscar em grafos e árvores.
 * Ao contrário do BFS, ele tenta ir o "mais fundo possível" em um ramo antes de retroceder (backtrack).
 * É usado em resolução de labirintos, detecção de ciclos, ordenação topológica e quebra-cabeças (como Sudoku).
 *
 * Como funciona:
 * 1. Pilha (Stack): Utiliza uma Pilha (LIFO) ou a própria pilha de recursão do sistema.
 * 2. Início: Começa pelo nó raiz.
 * 3. Exploração:
 *    - Marca o nó atual como visitado.
 *    - Escolhe um vizinho não visitado e avança para ele recursivamente.
 *    - Se não houver vizinhos não visitados (beco sem saída), retrocede (backtrack) para o nó anterior
 *      e tenta outro caminho.
 * 4. Repetição: Continua até visitar todos os nós alcançáveis.
 *
 * Pontos Positivos:
 * - Memória: Geralmente usa menos memória que o BFS, pois só precisa armazenar o caminho atual da raiz até o nó folha.
 * - Encontra Alvos Distantes: Pode encontrar um nó alvo que está longe da raiz mais rapidamente que o BFS (por sorte).
 * - Simples (Recursão): Muito fácil de implementar usando recursão.
 *
 * Pontos Negativos:
 * - Não Garante Caminho Mínimo: O primeiro caminho encontrado não é necessariamente o mais curto.
 * - Loops Infinitos: Em grafos com ciclos (e sem marcação de visitados adequada) ou árvores infinitas,
 *   pode ficar preso explorando um ramo para sempre.
 */
