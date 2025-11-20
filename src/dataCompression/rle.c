/*
 * Algoritmo RLE (Run-Length Encoding)
 * -----------------------------------
 *
 * O que é e para que serve:
 * O RLE é uma forma muito simples de compressão de dados sem perdas.
 * Ele funciona substituindo sequências longas de um mesmo valor (runs) por um único valor e um contador.
 * É frequentemente usado em imagens simples (como BMP, PCX, TGA) e ícones.
 *
 * Como funciona:
 * 1. Varredura: O algoritmo percorre os dados sequencialmente.
 * 2. Detecção de Repetição: Verifica se o elemento atual é igual ao anterior.
 * 3. Contagem: Se for igual, incrementa um contador.
 * 4. Armazenamento: Quando o valor muda (ou o contador atinge um limite), armazena o par (contador, valor).
 *    Exemplo: "AAAAABBBCC" -> "5A3B2C".
 *
 * Pontos Positivos:
 * - Extremamente Simples: Muito fácil de implementar e entender. Requer pouquíssima memória e processamento.
 * - Bom para Dados Específicos: Excelente para imagens com grandes áreas de cor sólida (desenhos simples, ícones)
 *   ou dados científicos com muitas leituras constantes.
 *
 * Pontos Negativos:
 * - Ineficiente para Dados Variados: Se os dados não tiverem muitas repetições sequenciais (como texto comum ou fotos),
 *   o RLE pode na verdade AUMENTAR o tamanho do arquivo (overhead do contador para cada caractere único).
 * - Sensível à Ordem: Só comprime repetições adjacentes. Se os dados repetidos estiverem espalhados, o RLE não ajuda.
 */
