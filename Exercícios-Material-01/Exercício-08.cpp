#include <iostream>
using namespace std;

int main()
{
    int v[5];
    int *p = v;
    int soma = 0;


    for (int i = 0; i < 5; i++)
    {
        cout << "Digite um valor: ";
        cin >> *(p + i);
    }


    for (int i = 0; i < 5; i++)
    {
        soma += *(p + i);
    }

    double media = soma / 5.0;

    cout << "Media: " << media << endl;

    return 0;
}
