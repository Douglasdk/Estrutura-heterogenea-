#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int civil;
	
	
	printf("Digite o numero da letra correspondente ao seu estado civil, e será exibido por extenso");
	printf("\n 1 - S");
	printf("\n 2 - C");
	printf("\n 3 - D");
	printf("\n 4 - V \n");
	scanf("%d",&civil);
	
	switch(civil){
		
		case 1: printf("Solteiro");
				break;
		case 2:	printf("Casado");
				break;
		case 3: printf("Divorciado");
				break;
		case 4:	printf("Viuvo");
				break;
		
	}
	
	
			
	return 0;
	
}
