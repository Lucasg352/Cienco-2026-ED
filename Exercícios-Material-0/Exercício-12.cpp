#include <iostream>

using namespace std;

int main()
{
    int maior=0,n=0;


    for (int i = 1; i <=3; i++)
    {
        cout <<"Digite o numero:";
        cin >> n;
        if(n > maior)
        {
            maior=n;

        }


    }
    cout <<"Maior numero: " << maior;

}
