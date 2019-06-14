#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int clas;
	
	printf("\n Saiba, a partir do codigo, a classificação do produto  \n");
	printf("\n Digite um codigo de um produto : \n");
	scanf("%d", &clas);
	
	
	if (clas >= 1 && clas <=15){
	
	
		
		if (clas == 1)
			printf("\n Alimento nao perecivel \n");
	
		else 
	
			if (clas >= 2 && clas <= 4)	
				printf("\n Alimento perecível \n");
				
			else 
			
				if (clas >= 5 && clas <= 6)	
					printf("\n Vestuario \n");
				
				else 
				
					if (clas == 7)
						printf("\n Higiene pessoal \n");
						
					else 
					
						if (clas >=8 && clas <= 15)
						printf("\n Limpeza e utensilios domesticos \n");

}

	else					
	printf("\n Invalido \n");
	system("PAUSE");
	

	
		return 0;
	
}
