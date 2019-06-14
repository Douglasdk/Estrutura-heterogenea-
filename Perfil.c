#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int sec,dec,res,soma;
	
	printf("\n Saiba qual seu perfil pelo seu ano de nascimento \n");
	printf("\n Digite os dois primeiros numeros do seu ano de nascimento \n");
	scanf("%d", & sec);
	printf("\n Digite os dois ultimos numeros do seu ano de nascimento \n");
	scanf("%d", & dec);
	
	soma= sec + dec;
	res= soma % 5;
	
	printf("\n Resto = %d \n", res);
	

	switch(res){
		
		case 0: printf("Timido");
		break;
		
		case 1: printf("Sonhador");
		break;
		
		case 2: printf("Paquerador");
		break;
		
		case 3: printf("Atraente");
		break;
		
		case 4: printf("Irresistivel");
		break;
		
			
	}
						

	return 0;
	
}
