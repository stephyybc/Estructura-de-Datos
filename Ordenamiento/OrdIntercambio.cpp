//Stephanie Benitez
//Ordenamiento por intercambio

#include<iostream>

using namespace std;

//Empezamos ocn una funcion void donde indicamos comno recorre el arreglo
void ordIntercambio (int a[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int k=i+1; k<n; k++)
        {
            if (a[i]>a[k])
            {
                int aux= a[i];
                a[i]= a[k];
                a[k]= aux;
            }
        }
    }
}

int main()
{

}
