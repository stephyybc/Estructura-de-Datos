//Stephanie Denisse Benitez Cabrera
//A00820320
//Recursividad Piramide
#include<iostream>

using namespace std;


void Piramide(int iNivel, int iEspacios)
{
    if (iNivel < 0) return;

    Piramide( iNivel - 1, iEspacios + 1 );

    for (int iI = 0; iI < iEspacios; iI++) {
        cout << " ";
    }
    for (int iI = 0; iI < iNivel; iI++) {
        cout << "* ";
    }
    cout << endl;
}

int main()
{
    int iN = 0;
    cout << "Ingresar numero de renglones: ";
    cin >> iN;
    if (iN > 0){
        Piramide(iN, 0);
    } else {
        cout << "0 no es un número valido" << endl;
    }
    return 0;
}

