# 📚 Guia de Estudos - Algoritmos e Estruturas de Dados

## 🎯 Por onde começar?

Este guia apresenta uma ordem lógica de estudo, do mais básico ao mais avançado.

---

## 📖 NÍVEL 1: FUNDAMENTOS (Comece aqui!)

### 1. Busca Básica
**Por quê começar aqui?** São os algoritmos mais simples e intuitivos.

- 📁 `searching/linearSearch.c` - Busca linear (o mais simples possível)
- 📁 `searching/binarySearch.c` - Busca binária (introduz o conceito de "dividir para conquistar")

**Exercício prático:** Implemente ambos e compare o desempenho com arrays de diferentes tamanhos.

---

### 2. Ordenação Básica
**Por quê?** Entender ordenação é fundamental para quase tudo.

- 📁 `sorting/bubblesort.c` - Comece aqui (super simples, didático)
- 📁 `sorting/quicksort.c` - Depois vá para este (mais eficiente, usado na prática)
- 📁 `sorting/mergesort.c` - Por último (introduz "dividir e conquistar" de forma clara)

**Exercício prático:** Ordene um array de números aleatórios e meça o tempo de cada algoritmo.

---

## 📖 NÍVEL 2: ESTRUTURAS DE DADOS BÁSICAS

### 3. Árvores
**Por quê?** Árvores são fundamentais para entender estruturas hierárquicas.

- 📁 `trees/bst.c` - Árvore Binária de Busca (comece aqui)
- 📁 `trees/avl.c` - Árvore AVL (depois que dominar BST)
- 📁 `trees/trie.c` - Trie (para trabalhar com strings)

**Exercício prático:** Implemente uma BST e faça operações de inserção, busca e remoção.

---

### 4. Grafos Básicos
**Por quê?** Grafos modelam relacionamentos e conexões (redes sociais, mapas, etc).

- 📁 `graph/bfs.c` - Busca em Largura (mais fácil, usa fila)
- 📁 `graph/dfs.c` - Busca em Profundidade (usa pilha/recursão)
- 📁 `graph/dijkstra.c` - Caminho mais curto (depois de dominar BFS/DFS)

**Exercício prático:** Modele um mapa de cidades e encontre o caminho mais curto entre duas delas.

---

## 📖 NÍVEL 3: PARADIGMAS DE ALGORITMOS

### 5. Dividir e Conquistar
**Por quê?** Técnica poderosa que você já viu em MergeSort e Busca Binária.

- 📁 `divideAndConquer/binarySearch.c` - Revisão sob nova perspectiva
- 📁 `divideAndConquer/mergeSort.c` - Revisão sob nova perspectiva

**Conceito chave:** Dividir o problema em partes menores, resolver cada parte e combinar.

---

### 6. Programação Dinâmica (DP)
**Por quê?** Resolve problemas complexos evitando recálculos.

- 📁 `dynamicProgramming/fibonacci.c` - **COMECE AQUI** (exemplo clássico e simples)
- 📁 `dynamicProgramming/knapsack.c` - Problema da mochila (mais complexo, mas muito importante)

**Conceito chave:** "Memorize" resultados já calculados para não repetir trabalho.

---

### 7. Algoritmos Gulosos (Greedy)
**Por quê?** Simples e eficientes quando aplicáveis.

- 📁 `greedy/activitySelection.c` - **COMECE AQUI** (exemplo perfeito de quando guloso funciona)
- 📁 `greedy/huffmanCoding.c` - Huffman como algoritmo guloso

**Conceito chave:** Sempre faça a escolha "localmente ótima" e espere que leve ao ótimo global.

---

### 8. Backtracking (Retrocesso)
**Por quê?** Essencial para problemas de busca exaustiva com poda.

- 📁 `backtracking/nQueens.c` - N Rainhas (clássico)
- 📁 `backtracking/sudoku.c` - Sudoku (aplicação prática)

**Conceito chave:** Tente uma solução. Se não funcionar, volte (backtrack) e tente outra.

---

## 📖 NÍVEL 4: TÓPICOS ESPECIALIZADOS

### 9. Algoritmos de Strings
**Por quê?** Processamento de texto é onipresente.

- 📁 `strings/kmp.c` - Busca de padrões eficiente (usado em editores de texto)

**Exercício prático:** Implemente um "Ctrl+F" simples usando KMP.

---

### 10. Compressão de Dados
**Por quê?** Entender como arquivos ZIP, imagens PNG e vídeos funcionam.

- 📁 `dataCompression/rle.c` - **COMECE AQUI** (super simples)
- 📁 `dataCompression/huffman.c` - Huffman (mais complexo, mas muito usado)
- 📁 `dataCompression/lz77.c` - Base do ZIP/GZIP
- 📁 `dataCompression/lzw.c` - Usado em GIF

**Exercício prático:** Comprima um arquivo de texto e veja a taxa de compressão.

---

## 🎓 ROTEIRO SUGERIDO (8-12 semanas)

### Semana 1-2: Fundamentos
- Busca Linear e Binária
- BubbleSort, QuickSort, MergeSort

### Semana 3-4: Estruturas de Dados
- BST, AVL
- BFS, DFS

### Semana 5-6: Paradigmas Básicos
- Dividir e Conquistar (revisão)
- Programação Dinâmica (Fibonacci, Knapsack)

### Semana 7-8: Paradigmas Avançados
- Algoritmos Gulosos
- Backtracking

### Semana 9-10: Grafos Avançados
- Dijkstra
- Aplicações práticas

### Semana 11-12: Tópicos Especiais
- Strings (KMP)
- Compressão de Dados

---

## 💡 DICAS DE ESTUDO

1. **Não pule etapas**: Cada conceito se baseia no anterior.
2. **Implemente tudo**: Ler não é suficiente. Escreva o código!
3. **Teste com dados reais**: Use arrays grandes, grafos complexos, etc.
4. **Compare desempenho**: Meça o tempo de execução (use `clock()` em C).
5. **Desenhe**: Faça diagramas de como o algoritmo funciona passo a passo.
6. **Ensine**: Explique o algoritmo para alguém (ou para um pato de borracha 🦆).

---

## 📊 COMPLEXIDADE - Tabela de Referência Rápida

| Algoritmo | Melhor Caso | Caso Médio | Pior Caso | Espaço |
|-----------|-------------|------------|-----------|--------|
| Linear Search | O(1) | O(n) | O(n) | O(1) |
| Binary Search | O(1) | O(log n) | O(log n) | O(1) |
| BubbleSort | O(n) | O(n²) | O(n²) | O(1) |
| QuickSort | O(n log n) | O(n log n) | O(n²) | O(log n) |
| MergeSort | O(n log n) | O(n log n) | O(n log n) | O(n) |
| BFS/DFS | O(V+E) | O(V+E) | O(V+E) | O(V) |
| Dijkstra | O(E log V) | O(E log V) | O(E log V) | O(V) |

*V = vértices, E = arestas*

---

## 🚀 PRÓXIMOS PASSOS

Depois de dominar estes algoritmos, você estará pronto para:
- Competições de programação (Codeforces, LeetCode)
- Entrevistas técnicas (Google, Meta, Amazon)
- Projetos complexos (IA, Sistemas Distribuídos, Compiladores)

**Boa sorte nos estudos! 🎉**
