/*
 * Trie (Árvore de Prefixos)
 * -------------------------
 *
 * O que é e para que serve:
 * A Trie (pronuncia-se "trai" ou "tri") é uma árvore especializada em armazenar strings (textos).
 * Cada nó representa um caractere de uma palavra.
 * É amplamente usada em sistemas de autocomplete (sugestão de palavras), corretores ortográficos e roteamento IP.
 *
 * Como funciona:
 * 1. Estrutura: A raiz é vazia. Seus filhos representam as primeiras letras das palavras armazenadas.
 * 2. Caminho: Para inserir "CASA", cria-se um nó 'C', que tem filho 'A', que tem filho 'S', que tem filho 'A'.
 *    O último nó é marcado como "fim de palavra".
 * 3. Compartilhamento: Palavras com o mesmo prefixo (ex: "CASA" e "CASO") compartilham os mesmos nós iniciais
 *    ('C'-'A'-'S'), economizando espaço para prefixos comuns.
 *
 * Pontos Positivos:
 * - Busca Rápida de Strings: O tempo de busca depende do tamanho da palavra (L), não do número de palavras (N). O(L).
 * - Autocomplete: Extremamente eficiente para encontrar todas as palavras que começam com um certo prefixo.
 *
 * Pontos Negativos:
 * - Uso de Memória: Pode consumir muita memória se as palavras não compartilharem muitos prefixos, pois cada nó
 *   precisa de ponteiros para todo o alfabeto (ex: 26 ponteiros por nó).
 * - Localidade de Cache: Os nós podem estar espalhados na memória, o que pode ser menos eficiente que arrays simples
 *   para certas operações.
 */
