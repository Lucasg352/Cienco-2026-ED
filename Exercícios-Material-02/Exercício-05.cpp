#include <iostream>
using namespace std;

enum Cores {VERMELHO, VERDE, AZUL};

typedef Cores TipoCor;

int main() {
    TipoCor cor;
    int opcao;

    cout << "Escolha uma cor:\n";
    cout << "0 - Vermelho\n1 - Verde\n2 - Azul\n";
    cin >> opcao;

    cor = (TipoCor)opcao;

    cout << "Cor escolhida: ";
    if(cor == VERMELHO) cout << "Vermelho";
    else if(cor == VERDE) cout << "Verde";
    else if(cor == AZUL) cout << "Azul";

    return 0;
}
