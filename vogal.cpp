#include <bits/stdc++.h>

using namespace std;

int main() {
    string nome;
    cout << "Digite o nome: ";
    getline(cin, nome);

    bool temVogal = false;
    for (int i = 0; i < nome.length(); i++) {
        char letra = tolower(nome[i]);
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            cout << "A primeira vogal do nome é: " << letra << endl;
            temVogal = true;
            break;
        }
    }

    if (!temVogal) {
        cout << "Não há vogal" << endl;
    }

    return 0;
}
