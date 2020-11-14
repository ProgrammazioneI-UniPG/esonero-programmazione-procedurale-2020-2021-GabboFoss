#include <stdio.h>
#include <stdlib.h>     // Dichiaro le librerie utilizzate
#include <string.h>
#include <time.h>

int main () {

  char M[128];
  char K[128];
  char C[128];

  time_t t;
  srand((unsigned) time(&t)); // Funzione di radomizzazione

  do
  {
  printf("\nInserisci la frase che vuoi cifrare: "); // Inserimento della frase da crifrare + pulizia del buffer
  fgets(M, 128, stdin);
  }
  while (strlen(M) -1 == 0);
    if (!strchr(M, '\n')) {
      while (fgetc(stdin) != '\n');
  }

  int scelta = 0;

  while (scelta != 1 && scelta != 2) {

  printf("\n---------------------------------\n");      // Creazione del menu di scelta per la cifratura
  printf("Scegliere l'opzione di cifratura\n");
  printf("1 - Cifratura Manuale\n");
  printf("2 - Cifratura Automatica\n");
  printf("---------------------------------\n");
  printf("\nla scelta è: ");
  scanf("%d", &scelta);

  while(getchar() != '\n'); // Pulizia del buffer

  switch (scelta) {   // Controllo dell'inserimento variabile 1 o 2 del menu
    case 1: break;
    case 2: break;
    default: printf("\nScelta sbagliata, selezionare il numero 1 o 2 (Preme invio per continuare)\n");
    while(getchar() != '\n');
    break;
  }

  }

  if(scelta == 1)
  {
    do
    {
      printf("\nInserisci una frase di lunghezza superiore o uguale a quella precedentemente inserita: ");

      fgets(K, 128, stdin);
    }
      while(strlen(K)<strlen(M));

      printf("\nTesto da criptare: %s\n" , M);

      for(int i=0; i<strlen(M) -1; i++) {     // Operazione di XOR per il crifraggio della key
      C[i] = (M[i] ^ K[i]);
    }

      printf("\nKey per codifica: ");       // Stampa della key per il cifraggio

      for (int i = 0; i<strlen(M) -1; i++) {
      printf("%c", K[i]);
    }

      printf("\nTesto criptato: ");       // Stampa del testo criptato

      for(int i=0; i<strlen(M) -1; i++) {
      printf("%X ", C[i]);
    }

      printf("\nTesto decriptato: ");

      for(int i=0; i<strlen(M) -1; i++) {     // Operazione di XOR per il decrifraggio della key + stampa
      C[i] = (C[i] ^ K[i]);
    }

      for(int i=0; i<strlen(M) -1; i++) {
      printf("%c", C[i]);
    }
      printf("\n");
      printf("\n");
  }
  else
  {
      printf("\nInserimento automatico della key di cifratura in corso...");

      printf("\n");

      for (int i = 0; i<strlen(M) - 1; i++) {     // Genereazione casuale della key
      K[i] = rand() % (128 - 32) + 32;
    }

      printf("\nTesto da criptare: %s" , M);

      for(int i=0; i<strlen(M) -1; i++) {     // Operazione di XOR per il crifraggio della key
      C[i] = (M[i] ^ K[i]);
    }

      printf("\nLa Key Gen è: ");           // Stampa della chiave automatica

      for (int i = 0; i<strlen(M) - 1; i++) {
      printf("%c", K[i]);
    }

      printf("\nTesto criptato: ");           // Stampa del testo criptato

      for(int i=0; i<strlen(M) -1; i++) {
      printf("%X", C[i]);
    }

      printf("\nTesto decriptato: ");

      for(int i=0; i<strlen(M) - 1; i++) {     // Operazione di XOR per il decrifraggio della key + stampa
      C[i] = (C[i] ^ K[i]);
    }

      for(int i=0; i<strlen(M) -1; i++) {
      printf("%c", C[i]);
    }
      printf("\n");
      printf("\n");
  }

  return 0;
}
//Program create by Gabriele Fossatelli
