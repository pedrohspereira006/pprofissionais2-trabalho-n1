#include "equipes.c"

int main () {
	int equipes;
	int jogos;
	int opcao;
	
	do {
		bemVindo();
		equipes = configI();
		jogos = configII();
	
		do {
		menu();
		opcao = selecao();
		} while(opcao < 1 || opcao > 5);
		
		if(opcao == 1) {
			registrarResultados(equipes, jogos);
		}
	}
	
	while (opcao != 5);
	
	return 0;
}
