#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <string.h>


struct{
	int i;
}contador;

struct{
	char letra;
	char acerto[47];
}chute;

void classic(char *palavra);



int main(){
	char *palavra;
	setlocale(LC_ALL,"Portuguese");
	
	classic(palavra);
	
	return 0;
}

void classic(char *palavra){
	//Vai reservar mem�ria para a palavra
	palavra = (char*)malloc(47*sizeof(char));
	
	//Verificar se h� espa�o 
	if(!palavra){
		printf("N�o tem mem�ria.");
		return;
}
	//Pedir ao usu�rio uma palavra
	printf("Informe a palavra para o jogo: ");
	gets(palavra);
	printf("Palavra: %s", palavra);
	
	
	
	//Contar o tamanho da palavra digitada
	int cont; 
	cont = strlen(palavra);
	printf("\n\nTamanho da palavra1: %d", cont);
	printf("\n\nTamanho Antes: %d \n", (strlen(palavra))*sizeof(char));
	
	
	//Realocar o tamanho da mem�ria para o tamanho da palavra
	palavra = (char*)realloc(palavra, cont*sizeof(char));
	
	
	//Verificar se h� mem�ria 
	if(!palavra){
		printf("N�o tem mem�ria.");
		return;
}
	

	for(contador.i = 0; contador.i < cont;contador.i++){
		printf("__ ");
	}
	
	for(contador.i = 0, contador.i <  )
	
		
	free(palavra);
	return;
}
