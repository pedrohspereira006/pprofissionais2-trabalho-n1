#include <stdio.h>
#include "equipes.h"

void bemVindo(void) {
	printf("\n============================================\n");
	printf("CONTROLE DE CAMPEONATOS\n");
	printf("============================================");
	
}




int configI(void) {
	int equipes;
	
	printf("\nInforme a quantia de equipes (entre 3 e 10): ");
	scanf("%d", &equipes);
	
	while(equipes < 3 || equipes > 10) {
		printf("Quantidade de equipes nao esta entre 3 e 10\n");
		printf("Tente novamente: ");
		
		scanf("%d", &equipes);
	}
	
	return equipes;
}




int configII(void) {
	int jogos;
	
	printf("\nInforme a quantia de jogos disputados (entre 1 e 10): ");
	scanf("%d", &jogos);
	
	while(jogos < 1 || jogos > 10) {
		printf("Quantidade nao esta entre 1 e 10\n");
		printf("Digite novamente: ");
		
		scanf("%d", &jogos);
	}
	
	return jogos;
}




void menu(void) {
	printf("\n1- Registrar resultados do campeonato");
	printf("\n2- Mostrar resumo do campeonato");
	printf("\n3- Mostrar regulamento");
	printf("\n4- Simular campanha de uma equipe");
	printf("\n5- Encerrar sistema");
	printf("\nEscolha uma opcao: ");

}




int selecao(void) {
	int opcao;
	
	scanf("%d", &opcao);
	
	switch(opcao) {
		case 1: 
			printf("\nRegistrar resultados");
			break;
		
		case 2:
			printf("\nMostrar resumo");
			break;
		
		case 3:
			printf("\nMostrar regulamento");
			break;
		
		case 4:
			printf("\nSimular campanha");
			break;
			
		case 5:
			printf("\nSistema encerrado com sucesso");
			printf("\nObrigado por usar o sistema");
			break;
			
		default:
			printf("\nOpcao invalida");
			printf("\nTente novamente\n");
			break;
	}
	
	return opcao;
}






int registrarResultados(int equipes, int jogos) {
	int i;
	int vitoria, empate, derrota;
	int pontosV, pontosE, pontosD, situacao;
	int resultados, total;
	
	
	for (i =1; i<= equipes; i++) {
	
	do {
		printf("\n============================================\n");
		printf("EQUIPE %d\n", i);
		printf("============================================");

		printf("\nVitorias: ");
		scanf("%d", &vitoria);
		
		while(vitoria < 0){
			printf("Valor invalido\n");
			printf("Insira novamente: ");
			scanf("%d", &vitoria);
		}
		
		if (vitoria>=0) {
			pontosV = 3 * vitoria;
		}
		
		
		
		printf("\nEmpates: ");
		scanf(" %d", &empate);
		
		while(empate < 0) {
			printf("Valor invalido\n");
			printf("Insira novamente: ");
			scanf("%d", &empate);
		}
		
		if (empate>=0) {
			pontosE = 1 * empate;
		}
		
		
		
		printf("\nDerrotas: ");
		scanf(" %d", &derrota);
		
		while(derrota < 0) {
			printf("Valor invalido\n");
			printf("Insira novamente: ");
			scanf("%d", &derrota);
		}
		
		if (derrota>=0) {
			pontosD = 0;
		}
	
	total = pontosV + pontosE + pontosD;
	resultados = vitoria + empate + derrota;
	
	if(resultados !=jogos) {
		printf("\nATENCAO! ");
		printf("\nO resultado nao corresponde ao total de jogos ");
		printf("\nInforme os dados da Equipe %d novamente\n", i);
	} else {
		printf("\nPontuacao: %d pontos\n ", total);
	}
	
	if(total >= 15) {
		printf("Excelente campanha\n");
	} else if(total >= 10 && total <=14) {
		printf("Boa campanha\n");
		} else if(total >= 5 && total <=9) {
			printf("Campanha regular\n");
		} else {
			printf("Campanha ruim\n");
		}
		
	}
	while(resultados !=jogos);
}

}
