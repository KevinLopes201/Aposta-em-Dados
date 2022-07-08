/*
 ============================================================================
 Name        : Trabalho.c
 Author      : Kevin Guerke Lopes
 Version     :
 Copyright   : Your copyright notice
 Description : Faça um programa que simule um jogo de dados!

 O jogador começa com um saldo de 100 reais e aposta um número de 2 a 12.
 O computador lança 2 dados escolhendo 2 números aleatórios de 1 a 6. Se a soma
 dos dados for igual ao número informado pelo usuário, o jogador vence ganhando 10
 reais, senão ele perde 10 reais. O programa atualiza o saldo do jogador e pergunta
 se ele deseja continuar jogando ('S' para sim e 'N' para não). Caso o jogador
 responda não ou seu saldo seja 0, o programa encerra.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sortear(void);
void mostrar_dado(void);

int dado1, dado2;



int main(void) {
	int saldo = 100, aposta, dadofim;
	char op;
	setbuf(stdout, NULL);

	do{

	//jogador aposta um numero de 2 a 12
	do{
		printf("\nAposte em um numero entre 2 e 12: ");
		scanf(" %d", &aposta);
		if(aposta < 2 || aposta > 12){
			printf("\nDigite um numero válido!!!");
		}
	}while(aposta < 2 || aposta > 12);

	//o computador lança 2 dados escolhendo 2 numeros aleatorios de 1 a 6
	sortear();
	mostrar_dado();

	//programa soma os dados e verifica se é igual ao numero informado pelo usuario e atualiza o dinheiro do jogador

	dadofim = dado1 + dado2;

	if(dadofim == aposta){
		printf("\nVocê ganhou!!!");
		saldo = saldo + 10;
	}
	else{
		printf("\nVocê perdeu!!!");
		saldo = saldo - 10;
	}

	//programa pergunta se o jogador quer continuar jogando

	printf("\nSeu Saldo é: R$ %d", saldo);

	if(saldo >= 10){
			printf("\nDeseja continuar? [S/N]: ");
			scanf(" %c", &op);
	}
	else{
		op = 'n';
	}

	}while(op =='S' || op == 's' );

	return EXIT_SUCCESS;
}

//sorteia os numeros dos dados
void sortear(void){
	srand(time(0));
	dado1 = 1 + rand() % 6;
	dado2 = 1 + rand() % 6;
}

//Mostra na tela um desenho do dado
void mostrar_dado(void){
	if(dado1 == 1){
		printf("+-------+\n");
		printf("|       |\n");
		printf("|   0   |\n");
		printf("|       |\n");
		printf("+-------+\n");
	}
	if(dado1 == 2){
		printf("+-------+\n");
		printf("|0      |\n");
		printf("|       |\n");
		printf("|      0|\n");
		printf("+-------+\n");
	}
	if(dado1 == 3){
		printf("+-------+\n");
		printf("|0      |\n");
		printf("|   0   |\n");
		printf("|      0|\n");
		printf("+-------+\n");
	}
	if(dado1 == 4){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|       |\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
	if(dado1 == 5){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|   0   |\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
	if(dado1 == 6){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|0     0|\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
	if(dado2 == 1){
		printf("+-------+\n");
		printf("|       |\n");
		printf("|   0   |\n");
		printf("|       |\n");
		printf("+-------+\n");
	}
	if(dado2 == 2){
		printf("+-------+\n");
		printf("|0      |\n");
		printf("|       |\n");
		printf("|      0|\n");
		printf("+-------+\n");
	}
	if(dado2 == 3){
		printf("+-------+\n");
		printf("|0      |\n");
		printf("|   0   |\n");
		printf("|      0|\n");
		printf("+-------+\n");
	}
	if(dado2 == 4){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|       |\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
	if(dado2 == 5){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|   0   |\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
	if(dado2 == 6){
		printf("+-------+\n");
		printf("|0     0|\n");
		printf("|0     0|\n");
		printf("|0     0|\n");
		printf("+-------+\n");
	}
}
