#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>


struct{
	int i;
	int fimp;
	int cont_le;
}contador;

struct{
	char letra;
	char acerto;
	int chut;
	char all_letras[26];
}chute;

void classic(char *palavra);
//void comparar(char *chute.acerto);


int main(){
	char *palavra;
	setlocale(LC_ALL,"Portuguese");
	
	classic(palavra);
	
	return 0;
}

void classic(char *palavra){
	//Vai reservar memória para a palavra
	palavra = (char*)malloc(47*sizeof(char));
	
	//Verificar se há espaço 
	if(!palavra){
		printf("Não tem memória.");
		return;
}
	//Pedir ao usuário uma palavra
	printf("Informe a palavra para o jogo: ");
	gets(palavra);
	printf("Palavra: %s", palavra);
	
	//system("color 1");
	
	//Contar o tamanho da palavra digitada
	int cont; 
	cont = strlen(palavra);
	printf("\n\nTamanho da palavra1: %d", cont);
	printf("\n\nTamanho Antes: %d \n", (strlen(palavra))*sizeof(char));
	
	
	//Realocar o tamanho da memória para o tamanho da palavra
	palavra = (char*)realloc(palavra, cont*sizeof(char));
	
	
	//Verificar se há memória 
	if(!palavra){
		printf("Não tem memória.");
		return;
}

	

	
	//Quantidade de linhas = Quant de letras
	for(contador.i = 0; contador.i < cont;contador.i++){
		//if(chute.letra == *palavra[contador.i])
		printf("__ ");
	}
	
/*	//Chutar letra ou Palavra
	printf("Digite 1 para: \n\tChutar uma letra\n\n"
			"Digite 2 para: \n\tChutar palavra\n\n");
			scanf("%d", &chute.chut);
			
	if(chute.chut == 1){*/
	
		do{
				printf("Descubra uma nova letra:\n");
			scanf("%c", &chute.letra);
		for(contador.i = 0; contador.i < cont;contador.i++){
			if(chute.letra == palavra[contador.i]){
				chute.all_letras[contador.i] = chute.letra;
				for(contador.cont_le = 0; contador.cont_le < cont; contador.cont_le++){
						printf("%c", chute.all_letras[contador.cont_le]);	
				}
				
				contador.fimp++;

				if(contador.fimp == cont){
					printf("\n\n\n\n\t\t\t\tWIN!!!");
				}
			}
			else{
				printf("__");	
			}
		}
		printf("\n\n");
		}while(contador.fimp < cont);
		
	
		
			
	
	
	

	free(palavra);
	return;
}
//void comparar(char chute.acerto){
//return;	
//}
