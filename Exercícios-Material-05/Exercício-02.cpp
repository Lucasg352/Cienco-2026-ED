#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> numeros;
    int valor;

    do {
        cout << "Digite um numero inteiro positivo (0 para finalizar): ";
        cin >> valor;

        if(valor > 0) {
            numeros.push(valor);
        }

    } while(valor != 0);

    cout << "\nNumeros na ordem inversa:" << endl;

    while(!numeros.empty()) {
        cout << numeros.top() << " ";
        numeros.pop();
    }

    return 0;
}
