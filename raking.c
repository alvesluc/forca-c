#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int ranking();
void limpaBuf();

int main(){
	setlocale(LC_ALL, "Portuguese");
	ranking();
	
	return;
}

int ranking()
{
	FILE * arquivo = NULL;
	char nome[10];
	int pontuacao;
		
	arquivo = fopen("ranking.bin", "ab+");
	
	scanf(" %[^\t\n]10s", &nome);
	fprintf(arquivo, nome);
	fprintf(arquivo, "\t");
	
	limpaBuf();
	printf("Nome do usuário: %s", nome);
	
	scanf("%d", &pontuacao);
	fprintf(arquivo, pontuacao);
	fprintf(arquivo, "\n");

	limpaBuf();
	printf("Pontuação do usuário: %d", pontuacao);
	
	fclose(arquivo);
	
	return EXIT_SUCCESS;
}

	void limpaBuf(){
	char c;
	
return((c = getchar()) != '\n' && c = EOF);
