#include <stdio.h> //abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL , "Portuguese");
	int id, bat;
	printf ("Digite a idade da pessoas: \n");
	scanf ("%d", &id);
	bat=id*31536000;
	printf("O coração da pessoa baterá %d\n", bat);
	
	system("pause");
	return 0;
}
