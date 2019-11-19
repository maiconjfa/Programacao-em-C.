#include <stdio.h> //abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void)
{

	setlocale(LC_ALL , "Portuguese");
	
	float c,f, pol, mm;
	printf("Coversão de Graus Celsius para Fahrenheit \n");
	printf ("Digite o valor  graus Celsius: \n");
	scanf ("%f", &c);
	f=(9*c+160)/5;
	printf("O valor em Fahrenheit é:%.2f\n", f);
	printf("\n");
	printf("Coversão de Polegadas para Milimetros \n");
	printf ("Digite a quantidade de chuva em polegadas: \n");
	scanf ("%f", &pol);
	mm=pol*25.4 ;
	printf("A quantidade de chuva em mm e:%.2f\n", mm);
	
		system("pause");
		return 0;
}
