/*Autor: Oscar Eduardo Fletes Ixta, Realizado: 17/02/22
	programa qu pida tres numeros e imprima el mayor de ellos
	Programa en lenguaje c que muestra el uso de scanf, operaciones aritméticas y uso de condiciones
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo int
		-scanf
		-Operacones aritmeticas 
		-Uso de condiciones 
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables enteras, como declararlas, pedirlas por teclado, usar condiciones,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 3 variables de tipo int (valor de a, valor de b, valor de c),
	El programa pide tres numeros e imprime el mayor de ellos
	*/
	
#include<stdio.h>

int main(){
	int a,b,c; //variable numero entero
	printf("Introduce el valor de a: "); //imrpime mensaje
	scanf("%d",&a); //lee el numero insertado por el teclado
	printf("Introduce el valor de b: "); //imrpime mensaje
	scanf("%d",&b); //lee el numero insertado por el teclado
	printf("Introduce el valor de c: "); //imrpime mensaje 
	scanf("%d",&c); //lee el numero insertado por el teclado
	
	if(a>b&&a>c){ //condicion, si a es mayor que b y si a es mayor que c
		printf("a es el mayor"); //imrpime mensaje
	}
	else if(b>a&&b>c){ //condicion, y si b es mayor que a y si b es mayor que c
		printf("b es el mayor"); //imrpime mensaje
	}
	else if(c>a&&c>b){ //condicion, y si c es mayor que b y si c es mayor que b
		printf("c es el mayor"); //imrpime mensaje
	}
	else if(c==a && c==b){ //condicion, y si c es igual que a y si c es igual que b
		printf("Las 3 son iguales"); //imrpime mensaje
	}
	else if(a==b && a>c){ //condicion, y si a es igual que b y si a es mayor que c
		printf("a y b son iguales"); //imrpime mensaje
	}
	else{ // si no se cumple la penultima condicon 
		printf("c y b son iguales"); //imrpime mensaje
	}
	
	return 0;
	
}
