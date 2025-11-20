/*
 * Algoritmo BubbleSort (Ordenação Bolha)
 * --------------------------------------
 *
 * O que é e para que serve:
 * O BubbleSort é um dos algoritmos de ordenação mais simples de entender e implementar.
 * Embora raramente usado em produção devido à ineficiência, é fundamental para fins educacionais.
 *
 * Como funciona:
 * 1. Passadas: Percorre o array várias vezes.
 * 2. Comparação e Troca: Em cada passo, compara elementos adjacentes. Se estiverem fora de ordem, troca-os.
 * 3. Flutuação: A cada passagem completa, o maior elemento "flutua" para sua posição final no final do array.
 * 4. Repetição: O processo se repete até que nenhuma troca seja necessária em uma passagem.
 *
 * Pontos Positivos:
 * - Simplicidade: Muito fácil de escrever e entender a lógica.
 * - Detecção de Ordenação: Se o array já estiver ordenado, pode terminar em O(n) (com uma flag de verificação).
 * - In-place e Estável: Não usa memória extra significativa e mantém a ordem de iguais.
 *
 * Pontos Negativos:
 * - Lento: Complexidade O(n^2) no caso médio e pior. Torna-se impraticável para grandes conjuntos de dados.
 * - Muitas Trocas: Realiza muitas operações de escrita na memória.
 */
