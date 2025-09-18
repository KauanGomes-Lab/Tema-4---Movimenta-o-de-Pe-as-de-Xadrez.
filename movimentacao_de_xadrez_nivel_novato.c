#include <stdio.h>

int main () {

int t,b,r;

printf("\n");

printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
printf("|||							            |||\n");
printf("|||                             XADREZ:                             |||\n");
printf("|||                         Nível - Novato.                         |||\n");
printf("|||							            |||\n");
printf("|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

printf("\n---------- Peça Movimentada : Torre. ----------\n");

	for (t = 0; t <= 4 ; t++) {
		printf("\nSentido : Direita.\n");
	}

printf("\nResumo: Movimento de (%d) Vezes Para à Direita.\n\n", t);
	
printf("---------- Peça Movimentada : Bispo. ----------\n");
	
	for (b = 0 ; b <= 4 ; b++) {
		printf("\nSentido : Cima.\n");
		printf("\nSentido : Direita.\n");
	}
	
printf("\nResumo: Movimento de (%d) Vezes em Sentido Diagonal Para Direita.\n", b);
	
printf("\n---------- Peça Movimentada : Rainha. ----------\n");
	
	for (r = 0 ; r <= 7 ; r++) {
		printf("\nSentido : Esquerda.\n");
	}
	
printf("\nResumo: Movimento de (%d) Vezes Para à Esquerda.\n", r);

printf("\n");
return 0;
}
