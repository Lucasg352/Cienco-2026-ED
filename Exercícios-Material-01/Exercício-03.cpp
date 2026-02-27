#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    int A[10], M[10],x;


    for (int i =0; i <10; i++ )
    {
        cout <<"Digite uma número: ";
        cin >> A[i];
    }


    cout <<"\nDigite um número X: ";
    cin >>x;

    for (int i = 0; i < 10; i++)
    {
        M[i] = A[i] * x;

    }

    cout <<"\nVetor M " <<endl;

    for (int i = 0; i <10; i++)
    {
        cout <<"[" << M[i] << "]" <<endl;


    }
    cout <<endl;


}



