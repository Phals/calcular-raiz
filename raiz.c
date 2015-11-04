#include <stdio.h>

double potencia(double base, double potencia){

	int i;

	double resul = 1;

	for(i=0; i<potencia; i++){

		resul = resul * base;

	}

	return resul;

}

double raiz(double n, double a){

	double c, d, v = a;

	do{

		c = a - ( potencia(a, n) - v )/( n * potencia(a, (n-1)) );

		d = c - a;

		a = c;

		printf("\n%.20lf", a);

	}while(d);

	return a;

}

int main(){

	double indice, valor, resultado;

	printf("Digite o indice da raiz: ");
	scanf("%lf", &indice);

	printf("Digite o valor: ");
	scanf("%lf", &valor);

	resultado = raiz(indice, valor);

	printf("\n\nA raiz %.0lf de %.0lf = %.20lf\n", indice, valor, resultado);

	return 0;

}
