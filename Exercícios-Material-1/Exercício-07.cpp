#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL,"Portuguese");

    int vetor[10];


    cout << "Digite 10 números:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Número " << i+1 << ": ";
        cin >> vetor[i];
    }

//Ponteiro para iniciar o vetor
    int *ptr = vetor;

    cout << "\nOrdem normal:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(ptr + i) << endl;
    }

    cout << "\nOrdem inversa:" << endl;
    for (int i = 9; i >= 0; i--) {
        cout << *(ptr + i) << endl;
    }


}

