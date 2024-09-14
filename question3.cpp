#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> faturamentos = {
        31490.7866, 37277.9400, 37708.4303, 0.0000, 0.0000, 17934.2269, 0.0000, 6965.1262, 
        24390.9374, 14279.6481, 0.0000, 0.0000, 39807.6622, 27261.6304, 39775.6434, 
        29797.6232, 17216.5017, 0.0000, 0.0000, 12974.2000, 28490.9861, 8748.0937, 
        8889.0023, 17767.5583, 0.0000, 0.0000, 3071.3283, 48275.2994, 10299.6761, 39874.1073};

    double menor = faturamentos[0], maior = faturamentos[0], soma = 0;
    int dias_com_faturamento = 0, dias_acima_da_media = 0;

    for(double valor : faturamentos){
        if(valor > 0){
            if (valor < menor) menor = valor;
            if (valor > maior) maior = valor;
            soma += valor;
            dias_com_faturamento++;
        }
    }

    double media = soma / dias_com_faturamento;

    for(double valor : faturamentos)
        if (valor > media) dias_acima_da_media++;

    cout << "Menor valor de faturamento: " << menor << endl;
    cout << "Maior valor de faturamento: " << maior << endl;
    cout << "Numero de dias com faturamento acima da media: " << dias_acima_da_media << endl;

    return 0;
}