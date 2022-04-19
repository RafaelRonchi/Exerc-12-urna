#include <stdio.h>

int main(void) {

  int voto = 1, venc, c1=0, c2=0, c3=0, vencedor,totalv=0;
  float voton=0, votob=0, nulos=0, brancos=0;

  while (voto != 0) {

    printf("********** Urna Eletrônica **********\n\n");

    printf("Opções de voto:\n");

    printf("1. Candidato Alan Turing\n");

    printf("2. Candidato Tim Berners-Lee\n");

    printf("3. Candidato Ken Thompson\n");

    printf("4. Nulo\n");

    printf("5. Branco\n");

    printf("ENTRE COM SEU VOTO \n");

    printf(" \n");

    scanf("%d", &voto);

    if (voto == 0) {
      break;
    }

    if (voto == 1) {
      c1++;
    }

    if (voto == 2) {
      c2++;
    }

    if (voto == 3) {
      c3++;
    }

    if (voto == 4) {
      nulos++;
    }

    if (voto == 5) {
      brancos++;
    }
    totalv++;

    if (voto >= 6){
      printf("Voto inválido");
      totalv--;
    }
  }

  nulos = (nulos * 100)/totalv;
  brancos = (brancos * 100)/totalv;

  printf("Os números de votos do candidato 1 foram: %d\n", c1);

  printf("Os números de votos do candidato 2 foram: %d\n", c2);

  printf("Os números de votos do candidato 3 foram: %d\n", c3);

  printf("A porcentagem de votos nulos foram: %.1f\n", nulos);

  printf("A porcentagem de votos brancos: %.1f\n", brancos);

  if (c1 > c2 && c1 > c3) {
    printf("O canditato vencedor foi o candito 1\n");
  }

  if (c2 > c1 && c2 > c3) {
    printf("O canditato vencedor foi o candito 2\n");
  }

  if (c3 > c1 && c3 > c2) {
    printf("O canditato vencedor foi o candito 3\n");
  }
}