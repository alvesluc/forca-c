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
	"                             4 - Cr�ditos\n" 
	"                               0 - Sair\n"
	"\nOp��o: ");
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
		
		default:
			printf("Op��o inv�lida!");
		break;	
	}
	return EXIT_SUCCESS;
}

int cadastro(){
	FILE * arquivo = NULL;
	char texto[47];
	
	arquivo = fopen("exemplo.bin", "ab+");
	scanf(" %[^\t\n]47s", &texto);
	fprintf(arquivo, texto);
	fprintf(arquivo, "\n");

	fflush(arquivo);
	printf("Palavra cadastrada: %s",texto);
	
	fclose(arquivo);
	
	return EXIT_SUCCESS;
}

/*int cadastrar(){
	FILE *f = fopen("file.txt", "w");
if (f == NULL)
{
    printf("Error opening file!\n");
    exit(1);
}

/* print some text 
const char *text = "Write this to the file";
fprintf(f, "Some text: %s\n", text);

/* print integers and floats 
int i = 1;
float py = 3.1415927;
fprintf(f, "Integer: %d, float: %f\n", i, py);

/* printing single chatacters 
char c = 'A';
fprintf(f, "A character: %c\n", c);

fclose(f);
}*/
