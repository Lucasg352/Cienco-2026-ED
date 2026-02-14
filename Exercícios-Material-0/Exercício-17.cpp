#include <iostream>

using namespace std;

int main()
{
    int n;


    do
    {
        cout <<"Digite o numero entre 1-10: ";
        cin >> n;

        if (n <1||n >10)
        {
            cout <<"Digite um numero valido"<<endl;

        }


    }
    while((n <1||n >10));

    cout <<"Numero valido";
}
