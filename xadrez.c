#include <stdio.h>
 
int main() {

    /*
      Este programa faz o movimento de tres peças: 
      - Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
      - Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
      - Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    */

    // primeira peça: Torre

    printf("Movimento da Primeira Peça = Torre - 5 casas para Direita\n");
 
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // segunda peça: Bispo

    printf("Movimento da Primeira Peça = Bispo - 5 casas na diagonal para cima e a direita\n");
 
    for (int i = 0; i < 5; i++) {
        printf("Cima, Direita\n");
    }

    // terceira peça: Rainha

    printf("Movimento da Primeira Peça = Torre - 8 casas para esquerda\n");
 
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }
 
  return 0;
}
