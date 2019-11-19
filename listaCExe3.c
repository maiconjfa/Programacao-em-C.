#include <stdio.h> //abrindo biblioteca
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL , "Portuguese");
	int a, b, c, d, soma ;
	printf ("Digite quatro valores distintos: \n");
	scanf ("%d %d %d %d", &a, &b, &c, &d);
	
	if(a>b && a>c && a>d){
	soma=b+c+d;
	printf ("A soma dos numeros menores é %d\n", soma);	
	}
	
	if(b>a && b>c && b>d){
	soma=a+c+d;
	printf ("A soma dos numeros menores é %d\n", soma);	
	}
	
	if(c>a && c>b && c>d){
	soma=a+b+d;
	printf ("A soma dos numeros menores é %d\n", soma);	
	}
	
	if(d>a && d>b && d>c){
	soma=a+b+c;
	printf ("A soma dos numeros menores é %d\n", soma);	
	}
	
	else((a==b && a==c && a==d) || (b==a && b==c && b==d)||(c==a && c==b && c==d)||(d==a && d==b && d==c)){
	printf("Não são valores distintos");	
	}
		
	system("pause");
}
