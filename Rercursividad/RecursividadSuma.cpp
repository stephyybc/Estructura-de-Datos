//Stephanie Denisse Benitez Cabrera
//A00820320
//Recursividad Suma


#include <iostream>

using namespace std;

//Función recursiva
int sumar (int);

int main(){
    int nElementos;//elementos a sumar declarados por el usuario

    do{
        cout<<"Digite el numero de elementos a sumar: "<<endl;
        cin>>nElementos;
    }
    while (nElementos <=0); //Se repetira hasta que se ingrese un número válido
    cout<<"La suma es: "<<sumar(nElementos)<<endl;

    //getch();
    return 0;
}

//Función recursiva
int sumar(int n){
    int suma= 0;

    if(n==1){//Caso base
        suma= 1;
    }
    else{
        suma= n+sumar(n-1);
    }
    return suma;
}
