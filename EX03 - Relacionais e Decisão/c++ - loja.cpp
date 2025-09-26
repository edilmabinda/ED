#include <iostream>
using namespace std;

int main() {
    float valorCompra;

    // Solicita o valor da compra
    cout << "Digite o valor da compra: R$ \n";
    cin >> valorCompra;

    // Verifica se tem frete grátis ou não
    if (valorCompra >= 100) {
        cout << "Frete Grátis" << endl;
    } else {
        valorCompra += 15; // Acrescenta R$15 de frete
        cout << "Valor total com frete: R$ " << valorCompra << endl;
    }

    return 0;
}