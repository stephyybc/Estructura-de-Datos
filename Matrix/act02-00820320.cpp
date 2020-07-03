//Stephanie Denisse Benitez Cabrera
//A00820320
//Spin the matrix

#include<iostream>

using namespace std;

int** generateMatrix(int filas, int columnas){
    int** temp = new int*[rows];

    for(int i=0; i<filas; i++){
        temp[i] = new int [columnas];
    }
    return temp;
}

void printMatrix(int** matrix, int filas, int columnas){
    for(int i=0; i<filas; ++i){
        for(int j=0; j<columnas; ++j){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    //generamos nuestra matriz
    int m_filas=4, m_columnas=4;
    int** m= generateMatriz(m_filas,m_columnas);

}
