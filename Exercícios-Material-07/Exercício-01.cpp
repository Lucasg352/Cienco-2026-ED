#include <iostream>
#include <list>

using namespace std;

int main() {
    list<int> numeros;
    int valor;

    cout << "Digite 5 numeros inteiros:" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> valor;
        numeros.push_back(valor);
    }

    cout << "\nOrdem de insercao:" << endl;

    for(int num : numeros) {
        cout << num << " ";
    }

    cout << "\n\nOrdem inversa:" << endl;

    for(auto it = numeros.rbegin(); it != numeros.rend(); it++) {
        cout << *it << " ";
    }

    return 0;
}
