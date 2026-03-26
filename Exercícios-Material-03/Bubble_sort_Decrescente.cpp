#include <iostream>
using namespace std;

void imprimeVetor(int vetor[]) {
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << " | " << vetor[i] << " | ";
    }
}

void bubbleSort3(int x[]) {
    int n = 1;
    int troca = 1;
    int aux;

    while (n <= 5 && troca == 1) {
        troca = 0;
        for (int i = 0; i <= 3; i++) {
            if (x[i] < x[i + 1]) {
                troca = 1;
                aux = x[i];
                x[i] = x[i + 1];
                x[i + 1] = aux;
            }
        }
        n++;
    }
}

int main() {
    int x[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite o numero: ";
        cin >> x[i];
    }

    cout << "\nAntes da ordenacao:";
    imprimeVetor(x);

    bubbleSort3(x);

    cout << "\nDepois da ordenacao:";
    imprimeVetor(x);

    return 0;
}
