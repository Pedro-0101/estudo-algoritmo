/*
 * Árvore Binária de Busca (BST - Binary Search Tree)
 * --------------------------------------------------
 *
 * O que é e para que serve:
 * Uma BST é uma estrutura de dados hierárquica onde cada nó possui no máximo dois filhos (esquerda e direita).
 * A propriedade fundamental é: para qualquer nó, todos os valores na subárvore esquerda são MENORES que ele,
 * e todos os valores na subárvore direita são MAIORES que ele.
 * Serve para manter dados ordenados e permitir operações rápidas de busca, inserção e remoção.
 *
 * Como funciona:
 * 1. Busca: Começa na raiz. Se o valor buscado for menor, vai para a esquerda; se for maior, vai para a direita.
 * 2. Inserção: Segue a mesma lógica da busca até encontrar uma posição vazia (folha) e insere o novo nó lá.
 * 3. Remoção: Mais complexa. Se o nó for folha, remove. Se tiver 1 filho, o filho substitui o pai.
 *    Se tiver 2 filhos, substitui pelo sucessor (menor dos maiores) ou antecessor.
 *
 * Pontos Positivos:
 * - Eficiência Média: Em média, busca, inserção e remoção são O(log n).
 * - Ordenação: Percorrer a árvore "em ordem" (in-order traversal) produz os dados ordenados.
 *
 * Pontos Negativos:
 * - Pior Caso (Desbalanceamento): Se os dados forem inseridos já ordenados (ex: 1, 2, 3, 4...), a árvore vira
 *   uma lista ligada (degenerada), e a complexidade cai para O(n), tornando-a lenta.
 *   (Para resolver isso, usam-se árvores balanceadas como AVL ou Red-Black).
 */
