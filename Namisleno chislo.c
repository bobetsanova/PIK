#include<stdio.h>

int main(){
	int nach = 0;
	int krai = 100;
	int br_opiti = 1;
	int i = 0;
	int chislo;
	char z;
	

	
	printf("Namislete si chislo ot 1 do 100.! (7 vuzmojni opita do namirane na chisloto).\n");
	for ( i = 1; i <= 7; i++)
	{
		chislo = (nach + krai) / 2;
		printf("Opit %d!\n",i);
		printf("%d\n", chislo);
		printf("Po-golqmo ili po-malko:");
		scanf(" %c", &z);
		if (z == '<')
		
			krai = chislo;
		
		else if (z == '>')
	
			nach = chislo;
		
		else if (z == '=')
		
			break;
		
		br_opiti++;
	}
	printf("Namislenoto chislo e :%d\n", chislo);
	printf("Chisloto be otgatnato s %d opita.\n", br_opiti);
	return 0;

}
