/*
 * Seleção de Atividades (Activity Selection - Algoritmo Guloso)
 * -------------------------------------------------------------
 *
 * O que é e para que serve:
 * Problema clássico de algoritmos gulosos (greedy).
 * Dado um conjunto de atividades com horários de início e fim, selecionar o máximo número de atividades
 * que não se sobreponham (não conflitem).
 * Usado em agendamento de tarefas, alocação de salas, processadores, etc.
 *
 * Como funciona:
 * 1. Ordenação: Ordena as atividades por horário de término (fim).
 * 2. Seleção Gulosa: Sempre escolhe a atividade que termina mais cedo e que não conflita com a última escolhida.
 * 3. Repetição: Continua até não haver mais atividades compatíveis.
 *
 * Pontos Positivos:
 * - Eficiência: O(n log n) devido à ordenação. Muito rápido.
 * - Simplicidade: Lógica direta e fácil de implementar.
 * - Solução Ótima: Para este problema específico, a abordagem gulosa garante a solução ótima.
 *
 * Pontos Negativos:
 * - Não Universal: Algoritmos gulosos NÃO funcionam para todos os problemas de otimização.
 *   É necessário provar que a escolha gulosa leva ao ótimo global.
 * - Miopia: Toma decisões locais sem considerar o impacto futuro (funciona aqui, mas não sempre).
 */
