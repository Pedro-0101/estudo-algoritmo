/*
 * Algoritmo de Dijkstra (Caminho Mínimo)
 * --------------------------------------
 *
 * O que é e para que serve:
 * O algoritmo de Dijkstra é usado para encontrar o caminho mais curto entre um nó de origem
 * e todos os outros nós em um grafo com pesos não-negativos nas arestas.
 * É fundamental em sistemas de GPS, roteamento de redes e mapas.
 *
 * Como funciona:
 * 1. Inicialização: Define a distância da origem como 0 e de todos os outros nós como infinito.
 * 2. Visita (Greedy): Seleciona o nó não visitado com a menor distância atual.
 * 3. Relaxamento: Para cada vizinho desse nó, calcula a distância total passando por ele.
 *    Se essa nova distância for menor que a distância registrada anteriormente no vizinho, atualiza-a.
 * 4. Marcação: Marca o nó atual como visitado (processado).
 * 5. Repetição: Repete até que todos os nós tenham sido visitados ou o destino seja alcançado.
 *
 * Pontos Positivos:
 * - Ótimo: Garante encontrar o caminho mais curto (se não houver pesos negativos).
 * - Versátil: Aplicável a muitos problemas de otimização e redes.
 *
 * Pontos Negativos:
 * - Pesos Negativos: Não funciona corretamente se o grafo tiver arestas com peso negativo (entra em loop ou dá resultado errado).
 *   (Para isso, usa-se Bellman-Ford).
 * - Custo: Pode ser lento em grafos muito densos se não usar uma estrutura de fila de prioridade eficiente (Heap).
 */
