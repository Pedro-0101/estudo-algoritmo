/*
 * Algoritmo BFS (Breadth-First Search - Busca em Largura)
 * -------------------------------------------------------
 *
 * O que é e para que serve:
 * A Busca em Largura é um algoritmo fundamental para percorrer ou buscar itens em grafos e árvores.
 * Ele explora o grafo "camada por camada", visitando todos os vizinhos de um nó antes de ir para
 * os vizinhos dos vizinhos. É usado para encontrar o caminho mais curto em grafos não ponderados
 * (menor número de arestas), em redes sociais (conexões de 1º grau, 2º grau, etc.) e web crawlers.
 *
 * Como funciona:
 * 1. Fila (Queue): Utiliza uma estrutura de dados do tipo Fila (FIFO - First In, First Out).
 * 2. Início: Começa pelo nó raiz (ou nó inicial) e o coloca na fila.
 * 3. Exploração:
 *    - Remove o primeiro nó da fila e o marca como visitado.
 *    - Adiciona todos os seus vizinhos não visitados ao final da fila.
 * 4. Repetição: Repete o processo até que a fila esteja vazia.
 *
 * Pontos Positivos:
 * - Caminho Mínimo: Garante encontrar o caminho com o menor número de arestas entre a origem e o destino.
 * - Completo: Se houver um caminho, o BFS o encontrará (em grafos finitos).
 * - Simples: Lógica direta usando uma fila.
 *
 * Pontos Negativos:
 * - Memória: Pode consumir muita memória, pois precisa armazenar todos os nós de um nível (camada)
 *   inteiro na fila. Em grafos muito largos, isso é custoso.
 * - Lento para Alvos Profundos: Se o alvo estiver muito longe da raiz, o BFS demorará para chegar lá,
 *   pois explora tudo o que está perto primeiro.
 */
