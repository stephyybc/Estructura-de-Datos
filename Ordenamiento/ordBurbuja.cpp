#include <iostream>

using namespace std;

int main(){

// Variables
int v[]={29, 3, 8, 17, 30, 42};
int j, aux;
/*Declaramos la J y el aux porque el j jugara el papel de los números
que estan dentro del arreglo y el aux donde se alamcenaran para el intercambio */
int i = 0;
bool ord = false;

// Visualizar el vector
for(int n=0; n<6; n++){
   cout << v[n] << " ";//Mandamos imprimir le vector inicial
}

// Ordenaciones
while(!ord){ //Mientras no este ordenado
	// Comparaciones
	ord=true;
	for(j=0;j<5-i;j++){//Recorre al penúltimo número
		if(v[j]>v[j+1]){//Si el número inicial es más grande que el número comparado
			// Intercambiar los elementos
			aux=v[j];
			v[j]=v[j+1];
			v[j+1]=aux;
			ord = false;	// Indicador de vector ordenado
		}
	}
	i++;
}

// Visualizar el vector ordenado
cout << endl;
for(int n=0; n<6; n++){
   cout << v[n] << " ";
}

return 0;
}
