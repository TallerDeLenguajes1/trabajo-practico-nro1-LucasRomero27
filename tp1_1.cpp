#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf( stdout, NULL, _IONBF, 0 );
	int *punt;
	int nro=5;
	punt=&nro;
	printf("Contenido del puntero: %d\n",*punt);
	printf("Direccion de memoria almacenada por el puntero: %p\n",punt);
	printf("Direccion de memoria de la variable: %p\n",&nro);
	printf("Direccion de memoria del puntero: %p\n",&punt);
	/*El punto 2 y 3 dan el mismo resultado, esto se debe a que realizamos la asginacion del puntero a la direccion de memoria de la variable que deseemos.
	 * El punto 4 no da lo mismo, ya que cada variable declarada tiene su direccion de memoria asignada por lo que es diferente a la del resto.*/
	return 0;
}