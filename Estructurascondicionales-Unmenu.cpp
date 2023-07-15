/*Hacer un menú que considere las siguientes opciones:
  Caso 1: Cubo de un numero
  Caso 2: Numero par o impar
  Case 3: Salir.
  */

#include<iostream>//Libreria estandar de entrada y salida de datos
#include<math.h>//Libreria estandar para operaciones matematicas basicas

using namespace std;//Da acceso al espacio de nombres para que el proyecto no deje de compilar porque han escogido los mismos nombres para dos funciones, clases, constantes o variables.

int main(){//Funcion principal
	//"int" funcion de tipo entero
	int numero,cubo,opc;
	
	//"int numero,cubo" son las variables
	//"opc" es la varibale de "Opcion"
	//"cout" imprime en salida de pantalla lo que escribo (azul)
	//"cin" guarda el valor de la variable (reemplaza escritamente la variable)
	//"\t" es para dar espacio en una linea como el tabulador (Tab)
	cout<<"\tMENU"<<endl;
	cout<<"1. Cubo de un numero."<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl;
	cout<<"Opcion: ";cin>>opc; 
	
	//"\n o endl" es salto de linea o espacio.
	//"if" leera la sintaxis si la condicional cumple.
	//"else" leera la sintaxis si la condicional no cumple.
	//"==" operador de igualdad, comprobara si el numero es igual al dato.
	//"%"Operador modulo o mod: "%2" que da como resultado el resto de la division entre 2.
	//"switch" son condicionales multiples. Dentro de esta funcion esta la variable o expresion.
	//"case" son los casos que conformaran las condicionales multiples.
	//"break" funcion que evita saltar al siguiente caso y generar problemas de lectura.
	//"pow(numero,3)" es la funcion que eleva un numero, en este caso al cubo ("3").
	switch(opc){
		case 1:
			cout<<"\nEscriba un numero: "; cin>>numero;
			cubo=pow(numero,3);
			cout<<"\nEl cubo del numero es: "<<cubo; break;
		case 2:
			cout<<"\nEscriba un numero: ";cin>>numero;
			if(numero%2==0){
			cout<<"\nEl numero es par.";
			}
			else{
			cout<<"\nEl numero es impar.";
			}
			break;
		case 3: break;
	}
	
	return 0;//Determina si el programa funciona correctamente.
}
