#include <iostream>
using namespace std;

bool isFibonacci(int num){
    int a = 0, b = 1;
    
    while (b < num){
        b = a + b;
        a = b - a;
    }
    
    return (b == num || num == 0);
}

int main(){
    int numero;
    cout << "Informe um numero: ";
    cin >> numero;

    if(isFibonacci(numero))
        cout << "O numero " << numero << " pertence a sequencia de Fibonacci." << endl;
    else
        cout << "O numero " << numero << " nao pertence a sequencia de Fibonacci." << endl;

    return 0;
}