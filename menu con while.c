#include<stdio.h>
#include<locale.h>
//guardamos memoria y prototipos
void pedirNumero();
void sumar();
void menu();
int numero;
int numero2;

int main(){
	 setlocale(LC_ALL,"spanish");
	 menu();
	 

}
//funciones
void pedirNumero(){
	
	printf("ingresa un número:");
	scanf("%i",&numero);
	
	printf("ingresa otro número:");
	scanf("%i",&numero2);
}

void sumar(){

	int resultado;//16
	resultado=numero+numero2;
	printf("%i+%i=%i\n",numero,numero2,resultado);
	
}

void menu(){
	
	int opc;
	printf ("¿Quieres hacer una suma?\n1-Si\n2-No\nOpc:");
	scanf("%i",&opc);
	while(opc==1){
		pedirNumero();	
		sumar();
		opc=2;
	}
	
	
}
