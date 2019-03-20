#include <stdio.h>
#include <stdlib.h>

int cuadrado(int nro);
void cuadrado2(int nro);
void invertir(int a,int b);
void ordenar(int a,int b);

int main(void) {
	setvbuf( stdout, NULL, _IONBF, 0 );
	int nro;
	printf("Ingrese un numero:");
	scanf("%d",&nro);
	printf("El cuadrado es: %d\n", cuadrado(nro));
	cuadrado2(nro);
	int a,b;
	printf("Ingrese dos numeros para invertir su valor:");
	scanf("%d",&a);
	scanf("%d",&b);
	invertir(a,b);
	ordenar(a,b);
	return 0;
}

int cuadrado(int nro){
	return nro*nro;
}

void cuadrado2(int nro){
	printf("El cuadrado2 es: %d\n", nro*nro);
}

void invertir(int a,int b){
	int aux1;
	printf("Valor de a antes del cambio:%d\n",a);
	printf("Valor de b antes del cambio:%d\n",b);
	aux1=a;
	a=b;
	b=aux1;
	printf("Valor de a despues del cambio:%d\n",a);
	printf("Valor de b despues del cambio:%d\n",b);
}

void ordenar(int a,int b){
	if(a>b){
		printf("Mayor: %d\n",a);
		printf("Menor: %d",b);
	}
	if(a<b){
		printf("Mayor: %d\n",b);
		printf("Menor: %d",a);
	}
	if(a==b){
		printf("Son iguales");
	}
}