/*
Escriba un programa en C que muestre la declaraciÃ³n bÃ¡sica de un puntero. Debe usar la funciÃ³n printf y 
el modificador %p para mostrar la direcciÃ³n de memoria en formato hexadecimal. 

*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m=10,n,o;
	int *z=&m ;
	
	printf("\n\n Punteros : mostramos el funcionamiento:\n");
	printf("-------------------------------------------------------\n"); 
	printf(" Tenemos a m=10, n y o son dos variables enteras y *z es un puntero a un entero");	
	printf("\n\n z almacena la dirección de m  = %p\n",  z); // z is a pointer so %p would print the address
	printf("tamanio de un entero %d \n",sizeof(m));
	printf("\n *z indica el valor de m = %i\n",   *z); 
	printf("\n &m es la dirección de m = %p\n",   &m); // &m gives the address of the integer variable m 
	// so %p is the specifier for that address
	printf("\n &n es la dirección de n = %p\n",   &n);
	printf("\n &o  es la dirección de o = %p\n",   &o);
	printf("\n &z es la dirección de z = %p\n\n", &z); // &z gives the address, where the pointer z is 
	// stored -> still an address -> %p is the right
	// specifier    
    return 0;
}
