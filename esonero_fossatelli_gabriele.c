#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

  char frase_dc[128];

  printf("Inserisci la frase che vuoi cifrare: ");
  fgets(frase_dc, 128, stdin);

  //printf("%s\n", frase_dc);

  int scelta = 0;
  char frase_sost;

  while (scelta != 1 || scelta != 2) {
  int i = 0;
  printf("---------------------------------\n");
  printf("Scegliere l'opzione di cifratura\n");
  printf("1 - Cifratura Manuale\n");
  printf("2 - Cifratura Automatica\n");
  printf("---------------------------------\n");
  scanf("%d", &scelta);
  i++;
}

    if(scelta == 1)
    {
      printf("Inserisci una frase di lunghezza superiore o uguale a quella precedentemente inserita\n");
    }
    else
    {
      printf("Inserimento automatico della chiave di cifratura\n");
    }



return 0;
}
