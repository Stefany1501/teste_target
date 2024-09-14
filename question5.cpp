#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Digite uma palavra: ";
    getline(cin, str);

    int n = str.length();
    for(int i = 0; i < n / 2; i++){
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }

    cout << "Palavra invertida: " << str << endl;

    return 0;
}