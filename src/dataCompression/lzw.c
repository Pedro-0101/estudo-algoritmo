/*
 * Algoritmo LZW (Lempel-Ziv-Welch)
 * --------------------------------
 *
 * O que é e para que serve:
 * O LZW é uma melhoria do algoritmo LZ78 (sucessor do LZ77). É um algoritmo de compressão sem perdas
 * baseado em dicionário. Foi amplamente utilizado em formatos como GIF e TIFF, e no comando 'compress' do Unix.
 *
 * Como funciona:
 * 1. Inicialização: O dicionário é inicializado com todos os caracteres possíveis (alfabeto básico, ex: ASCII 0-255).
 * 2. Leitura e Acumulação: O algoritmo lê caracteres da entrada e tenta formar a maior string que JÁ existe no dicionário.
 * 3. Emissão e Atualização: Quando encontra uma sequência que não está no dicionário:
 *    - Emite o código da maior sequência conhecida encontrada até o momento.
 *    - Adiciona a nova sequência (maior conhecida + próximo caractere) ao dicionário com um novo código.
 * 4. Repetição: O processo continua até o fim dos dados.
 *
 * Pontos Positivos:
 * - Simplicidade: Mais simples de implementar que o LZ77 em termos de estrutura de dados.
 * - Velocidade: Geralmente rápido tanto na compressão quanto na descompressão.
 * - Sem Janela Limitada: O dicionário cresce (até um limite), permitindo capturar padrões repetitivos complexos.
 *
 * Pontos Negativos:
 * - Patentes (Histórico): O LZW foi coberto por patentes (Unisys) por muitos anos, o que limitou seu uso livre
 *   (ex: controvérsia do GIF). As patentes expiraram, mas o estigma histórico permanece.
 * - Crescimento do Dicionário: O dicionário pode crescer muito; é necessário gerenciamento (limpar ou congelar)
 *   quando ele enche.
 * - Menos Eficiente para Dados Curtos: Pode expandir arquivos muito pequenos ou com pouca repetição devido ao
 *   tamanho dos códigos de saída (que aumentam conforme o dicionário cresce).
 */
