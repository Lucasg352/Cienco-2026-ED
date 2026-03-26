#include <iostream>
using namespace std;

int main() {
    int numeros[10];

    cout << "Digite 10 numeros:\n";
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                int temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    int menor = numeros[0];
    int maior = numeros[9];
    int contMenor = 0;
    int contMaior = 0;

    for (int i = 0; i < 10; i++) {
        if (numeros[i] == menor) contMenor++;
        if (numeros[i] == maior) contMaior++;
    }

    cout << "\nNumeros ordenados:\n";
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << " ";
    }

    cout << "\n\nMenor numero: " << menor;
    cout << "\nQuantidade de vezes: " << contMenor;

    cout << "\n\nMaior numero: " << maior;
    cout << "\nQuantidade de vezes: " << contMaior;

    return 0;
}
