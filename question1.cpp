#include <iostream>
using namespace std;

int main(){
    int INDICE = 13;
    int SOMA = 0;
    int K = 0;

    while(K < INDICE){
        K = K + 1;
        SOMA = SOMA + K;
    }

    cout << "O valor de SOMA é: " << SOMA << endl;

    return 0;
}

//portanto,retorna 91 ao fim do processamento
