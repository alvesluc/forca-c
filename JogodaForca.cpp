#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int menu();
int cadastro();

enum modo_de_jogo{
	SAIR,
	JOGAR,
	RANKING,
	CADASTRAR,
	CREDITOS
};

int main(){
	setlocale(LC_ALL, "Portuguese");
	menu();
	return EXIT_SUCCESS;
}

int menu(){
	enum modo_de_jogo opcao;
	
	printf(
	" +----------------------------------------------------------------------+\n"
	" |   o__ __o__/_                                                        |\n"                                                 
	" |  <|    v                                                             |\n"                                                  
	" |  < >                                                                 |\n"                                                         
	" |   |              o__ __o    \\o__ __o       __o__     o__ __o/        |\n" 
	" |   o__/_         /v     v\\    |     |>     />  \\     /v     |         |\n"  
	" |   |            />       <\\  / \\   < >   o/         />     / \\        |\n" 
	" |  <o>           \\         /  \\o/        <|          \\      \\o/        |\n" 
	" |   |             o       o    |          \\\\          o      |         |\n"  
	" |  / \\            <\\__ __/>   / \\          _\\o__</    <\\__  / \\        |\n"
	" +----------------------------------------------------------------------+\n" 
	"                               1 - Jogar\n"
	"                            2 - Ver Ranking\n"
	"                         3 - Cadastrar Palavras\n" 
	"                             4 - Créditos\n" 
	"                               0 - Sair\n"
	"\nOpção: ");
	scanf("%d", &opcao);
	
	switch(opcao){
		case SAIR:
			printf("Sucesso ao sair!");
			return EXIT_SUCCESS;
		break;
		
		case JOGAR:
		break;
		
		case RANKING:
		break;
		
		case CADASTRAR:
			cadastro();
		break;
		
		case CREDITOS:
		break;
	}
}

int cadastro(){
	FILE * arquivo = NULL;
	char texto[47];
	
	arquivo = fopen("exemplo.txt", "a+");
	fprintf(arquivo,texto);
	fflush(arquivo);

	arquivo = fopen("exemplo.txt","a+"); 
	fgets(texto, 47, arquivo);
	printf("%s",texto);
	
	return EXIT_SUCCESS;
}
