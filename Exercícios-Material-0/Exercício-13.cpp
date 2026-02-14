#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float nota;


    cout <<"Digite a nota: ";
    cin >> nota;


    if(nota>=6){
        cout <<"APROVADO";
    }else if(nota >=4 && nota <6){
        cout <<"RECUPERAÇÃO";
    }else{
        cout <<"REPROVADO";


    }
}
