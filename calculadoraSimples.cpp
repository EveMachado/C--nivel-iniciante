#include <iostream>

using namespace std;

int main() {
    double num1, num2, resultado;
    char operador;
    bool continuar = true;

    while (continuar) {
        cout << "Digite o primeiro número: ";
        cin >> num1;

        cout << "Digite o segundo número: ";
        cin >> num2;

        cout << "Digite o operador (+, -, * ou /): ";
        cin >> operador;

        switch (operador) {
            case '+':
                resultado = num1 + num2;
                cout << num1 << " + " << num2 << " = " << resultado << endl;
                break;
            case '-':
                resultado = num1 - num2;
                cout << num1 << " - " << num2 << " = " << resultado << endl;
                break;
            case '*':
                resultado = num1 * num2;
                cout << num1 << " * " << num2 << " = " << resultado << endl;
                break;
            case '/':
                resultado = num1 / num2;
                cout << num1 << " / " << num2 << " = " << resultado << endl;
                break;
            default:
                cout << "Operador inválido." << endl;
                break;
        }

        cout << "Deseja continuar? (s/n): ";
        char resposta;
        cin >> resposta;

        if (resposta == 'n' || resposta == 'N') {
            continuar = false;
        }
    }

    return 0;
}
