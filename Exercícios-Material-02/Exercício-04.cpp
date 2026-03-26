#include <iostream>
using namespace std;

typedef int VetorInteiros[5];

int main() {
    VetorInteiros v = {1, 2, 3, 4, 5};

    cout << "Valores do vetor:\n";
    for(int i = 0; i < 5; i++) {
        cout << v[i] << " ";
    }

    return 0;
}
