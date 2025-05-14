#include <stdio.h>
 
    /*
      Este programa faz o movimento de tres peças: 
      - Torre: Move-se em linha reta horizontalmente ou verticalmente. Seu programa deverá simular o movimento da Torre cinco casas para a direita.
      - Bispo: Move-se na diagonal. Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
      - Rainha: Move-se em todas as direções. Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    */

void moverTorre(int casas) {
  if (casas > 0) {
    printf("Direita\n");
    moverTorre(casas - 1);
  }
}

void moverBispo(int casas) {
  if (casas > 0) {
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
  }
}

void moverRainha(int casas) {
  if (casas > 0) {
    printf("Esquerda\n");
    moverRainha(casas - 1);
  }
}

int main() {

  printf("primeira peça: Torre\n");
  moverTorre(5);
  printf("segunda peça: Bispo\n");
  moverBispo(5);
  printf("terceira peça: Rainha\n");
  moverRainha(8);
  return 0;
}
