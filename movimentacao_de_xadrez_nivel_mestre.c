#include <stdio.h>

int
dado,
dados,
torre,
bispo,
rainha,
cavalo;
// Função Para Quebrar Linha.
void ql () {
	printf("\n");
}
// Função Para Mostrar a Label do jogo: 
void label_jogo () {
printf("-----------------------------------------------------------------------\n");
printf("                                XADREZ:                                \n");
printf("                            Nível - Mestre.                            \n");
printf("-----------------------------------------------------------------------\n");
}
// Função Para Label da Torre.
void label_torre () {
	printf("\n---------- Movimento : Torre. ----------\n");
}
// Função Para dar Printf nos Movimentos da Torre.
void contador_torre1 () {
	if (torre <= 8) {
		printf("\nResumo : Mova a Torre %d Vezes Para à Cima.\n", torre);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Torre.
void contador_torre2 () {
	if (torre <= 8) {
		printf("\nResumo : Mova a Torre %d Vezes Para à Baixo.\n", torre);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Torre.
void contador_torre3 () {
	if (torre <= 8) {
		printf("\nResumo : Mova a Torre %d Vezes Para à Esquerda.\n", torre);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Torre.
void contador_torre4 () {
	if (torre <= 8) {
		printf("\nResumo : Mova a Torre %d Vezes Para à Direita.\n", torre);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Torre Para Cima.
void mover_torre1 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nTorre: Cima.\n");
	mover_torre1 (mover - 1);
	}
}
// Função Para dar Printf nos Movimentos da Torre Para Baixo.
void mover_torre2 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nTorre: Baixo.\n");
	mover_torre2 (mover - 1);
	}
}
// Função Para dar Printf nos Movimentos da Torre Para Esquerda.
void mover_torre3 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nTorre: Esquerda.\n");
	mover_torre3 (mover - 1);
	}
}
// Função Para dar Printf nos Movimentos da Torre Para Direita.
void mover_torre4 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nTorre: Direita.\n");
	mover_torre4 (mover - 1);
	}
}
// Função Para Label do Bispo.
void label_bispo () {
	printf("\n---------- Movimento : Bispo. ----------\n");
}
// Função Para dar Printf nos Movimentos do Bispo.
void contador_bispo1 () {
	if (bispo <= 8) {
		printf("\nResumo : Mova o Bispo %d Vezes na Diagonal Sentido à Cima Esquerda.\n", bispo);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos do Bispo.
void contador_bispo2 () {
	if (bispo <= 8) {
		printf("\nResumo : Mova o Bispo %d Vezes na Diagonal Sentido à Cima Direita.\n", bispo);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos do Bispo.
void contador_bispo3 () {
	if (bispo <= 8) {
		printf("\nResumo : Mova o Bispo %d Vezes na Diagonal Sentido à Baixo Esquerda.\n", bispo);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos do Bispo.
void contador_bispo4 () {
	if (bispo <= 8) {
		printf("\nResumo : Mova o Bispo %d Vezes na Diagonal Sentido à Baixo Direita.\n", bispo);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos do Bispo Para Diagonal Superior Esquerda.
void mover_bispo1 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nBispo: Cima.\n");
		printf("\nBispo: Esquerda.\n");
	mover_bispo1 (mover - 1);
	}
}
// Função Para dar Printf nos Movimentos do Bispo Para Diagonal Superior Direita.
void mover_bispo2 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nBispo: Cima.\n");
		printf("\nBispo: Direita.\n");
	mover_bispo2 (mover - 1);	
	}
}
// Função Para dar Printf nos Movimentos do Bispo Para Diagonal Inferior Esquerda.
void mover_bispo3 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nBispo: Baixo.\n");
		printf("\nBispo: Esquerda.\n");
	mover_bispo3 (mover - 1);	
	}
}
// Função Para dar Printf nos Movimentos do Bispo Para Diagonal Inferior Direita.
void mover_bispo4 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nBispo: Baixo.\n");
		printf("\nBispo: Direita.\n");
	mover_bispo4 (mover - 1);	
	}
}
// Função Para Label da Rainha.
void label_rainha () {
	printf("\n---------- Movimento : Rainha. ----------\n");
}
// Função Para dar Printf nos Movimentos da Rainha.
void contador_rainha1 () {
	if (rainha <= 8) {
		printf("\nResumo : Mova a Rainha %d Vezes Para à Cima.\n", rainha);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Rainha.
void contador_rainha2 () {
	if (rainha <= 8) {
		printf("\nResumo : Mova a Rainha %d Vezes Para à Baixo.\n", rainha);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Rainha.
void contador_rainha3 () {
	if (rainha <= 8) {
		printf("\nResumo : Mova a Rainha %d Vezes Para à Esquerda.\n", rainha);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Rainha.
void contador_rainha4 () {
	if (rainha <= 8) {
		printf("\nResumo : Mova a Rainha %d Vezes Para à Direito.\n", rainha);
	}else {
		printf("\nResumo : Só São Permitidos 8 Movimentos.\n");
	}
}
// Função Para dar Printf nos Movimentos da Rainha Para Cima.
void mover_rainha1 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nRainha: Cima.\n");
	mover_rainha1 (mover - 1);	
	}
}
// Função Para dar Printf nos Movimentos da Rainha Para Baixo.
void mover_rainha2 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nRainha: Baixo.\n");
	mover_rainha2 (mover - 1);	
	}
}
// Função Para dar Printf nos Movimentos da Rainha Para Esquerda.
void mover_rainha3 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nRainha: Esquerda.\n");
	mover_rainha3 (mover - 1);	
	}
}
// Função Para dar Printf nos Movimentos da Rainha Para Direita.
void mover_rainha4 (int mover) {
	if (mover > 0 && mover <= 8) {
		printf("\nRainha: Direita.\n");
	mover_rainha4 (mover - 1);	
	}
}
// Função Para Label do Cavalo.
void label_cavalo () {
	printf("\n---------- Movimento : Cavalo. ----------\n");
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Cima e Direita.
void mover_cavalo1 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Cima.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Esquerda.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Cima e %d Para a Esquerda.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Cima e Esquerda.
void mover_cavalo2 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Cima.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Direita.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Cima e %d Para a Direita.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Baixo e Esquerda.
void mover_cavalo3 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Baixo.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Esquerda.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Baixo e %d Para a Esquerda.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Baixo e Direita.
void mover_cavalo4 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Baixo.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Direito.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Baixo e %d Para a Direito.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Esquerda e Para Cima.
void mover_cavalo5 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Esquerda.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Cima.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Esquerda e %d Para a Cima.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Esquerda e Para Baixo.
void mover_cavalo6 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Esquerda.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Baixo.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Esquerda e %d Para a Baixo.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Direita e Para Cima.
void mover_cavalo7 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Direita.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Cima.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Direita e %d Para a Cima.\n\n", i , j);
	}
}
// Função Para dar Printf nos Movimentos do Cavalo em L Para Direita e Para Baixo.
void mover_cavalo8 (int mover) {
	int i = 0 , j = 0 , c = 1;
	
	for (i ; i <= 1 ; i++) {
		printf("\nCavalo: Direita.\n");
	}
	for (j ; j <= 0 ; j++) {
		printf("\nCavalo: Baixo.\n");
	}
	if (c > 0) {
		printf("\nResumo : Mova o Cavalo %d Casas Para Direita e %d Para a Baixo.\n\n", i , j);
	}
}
// switch Para Torre.
void escolha_torre () {
	printf("\nEscolha: \n");
	printf("\n1 - Cima.\n");
	printf("2 - Baixo.\n");
	printf("3 - Esquerda.\n");
	printf("4 - Direita.\n\n");
	
	printf("\nDigite a Opção Desejada: \n");
	scanf("%d", &dados);
	
	switch (dados) {
	case 1:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &torre);
		label_torre();
		mover_torre1(torre);
		contador_torre1();
		ql();
	break;
	case 2:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &torre);
		label_torre();
		mover_torre2(torre);
		contador_torre2();
		ql();
	break;
	case 3:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &torre);
		label_torre();
		mover_torre3(torre);
		contador_torre3();
		ql();
	break;
	case 4:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &torre);
		label_torre();
		mover_torre4(torre);
		contador_torre4();
		ql();
	break;
	}
}
// switch Para Bispo.
void escolha_bispo () {
	printf("\nEscolha: \n");
	printf("\n1 - Diagonal Cima Esquerda.\n");
	printf("2 - Diagonal Cima Direita.\n");
	printf("3 - Diagonal Baixo Esquerda.\n");
	printf("4 - Diagonal Baixo Direita.\n\n");
	
	printf("\nDigite a Opção Desejada: \n");
	scanf("%d", &dados);
	
	switch (dados) {
	case 1:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &bispo);
		label_bispo();
		mover_bispo1(bispo);
		contador_bispo1();
		ql();
	break;
	case 2:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &bispo);
		label_bispo();
		mover_bispo2(bispo);
		contador_bispo2();
		ql();
	break;
	case 3:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &bispo);
		label_bispo();
		mover_bispo3(bispo);
		contador_bispo3();
		ql();
	break;
	case 4:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &bispo);
		label_bispo();
		mover_bispo4(bispo);
		contador_bispo4();
		ql();
	break;
	}
}
// switch Para Rainha.
void escolha_rainha () {
	printf("\nEscolha: \n");
	printf("\n1 - Cima.\n");
	printf("2 - Baixo.\n");
	printf("3 - Esquerda.\n");
	printf("4 - Direita.\n\n");
	
	printf("\nDigite a Opção Desejada: \n");
	scanf("%d", &dados);
	
	switch (dados) {
	case 1:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &rainha);
		label_rainha();
		mover_rainha1(rainha);
		contador_rainha1();
		ql();
	break;
	case 2:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &rainha);
		label_rainha();
		mover_rainha2(rainha);
		contador_rainha2();
		ql();
	break;
	case 3:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &rainha);
		label_rainha();
		mover_rainha3(rainha);
		contador_rainha3();
		ql();
	break;
	case 4:
		printf("\nEntre Com o Número de Casas: \n");
		scanf("%d", &rainha);
		label_rainha();
		mover_rainha4(rainha);
		contador_rainha4();
		ql();
	break;
	}
}
// switch Para Cavalo.
void escolha_cavalo () {
	printf("\nEscolha: \n");
	printf("1 - Cima Direita.\n");
	printf("2 - Cima Esquerda.\n");
	printf("3 - Baixo Direita.\n");
	printf("4 - Baixo Esquerda.\n");
	printf("5 - Esquerda Cima.\n");
	printf("6 - Esquerda Baixo.\n");
	printf("7 - Direita Cima.\n");
	printf("8 - Direita Baixo.\n\n");
	
	printf("\nDigite a Opção Desejada: \n");
	scanf("%d", &dados);
	
	switch (dados) {
	case 1:
		label_cavalo();
		mover_cavalo1(1);
	break;
	case 2:
		label_cavalo();
		mover_cavalo2(1);
	break;
	case 3:
		label_cavalo();
		mover_cavalo3(1);
	break;
	case 4:
		label_cavalo();
		mover_cavalo4(1);
	break;
	case 5:
		label_cavalo();
		mover_cavalo5(1);
	break;
	case 6:
		label_cavalo();
		mover_cavalo6(1);
	break;
	case 7:
		label_cavalo();
		mover_cavalo7(1);
	break;
	case 8:
		label_cavalo();
		mover_cavalo8(1);
	break;
	}
}

int main () {

printf("\nEscolha: \n");
printf("\n1 - Torre.\n");
printf("2 - Bispo.\n");
printf("3 - Rainha.\n");
printf("4 - Cavalo.\n\n");

scanf("%d", &dado);

switch (dado) {
case 1:
	escolha_torre();
break;
case 2:
	escolha_bispo();
break;
case 3:
	escolha_rainha();
break;
case 4:
	escolha_cavalo();
break;
}

return 0;
}
