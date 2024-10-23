#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    float valor, valor_final;
    int tipo_venda;

    cout << "Digite o valor do console: ";
    cin >> valor;
    cout << "Digite o tipo de venda (1 para à vista, 2 para parcelado): ";
    cin >> tipo_venda;

    if (tipo_venda == 1) {
        valor_final = valor * 0.9;
        cout << "Valor final com desconto de 10%: " << valor_final << endl;
    } else {
        valor_final = valor;
        cout << "Valor final parcelado em 2x sem juros: " << valor_final / 2  << endl;
    }

    return 0;
}
