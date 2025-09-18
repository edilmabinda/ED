#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Solicitando dois números ao usuário
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;

    // Realizando operações aritméticas
    cout << "Soma: " << num1 + num2 << endl;
    cout << "Subtração: " << num1 - num2 << endl;
    cout << "Multiplicação: " << num1 * num2 << endl;

    if (num2 != 0) {
        cout << "Divisão: " << (float)num1 / num2 << endl;
    } else {
        cout << "Erro: Divisão por zero!" << endl;
    }

    return 0;
}
