#include <iostream>

using namespace std;

int main (void) {
    int idade1, idade2, idade3; // idade das irm�s
    int soma, maiorIdade, menorIdade, camilaIdade; // vari�veis auxiliares

    // leitura das idades
    cin >> idade1 >> idade2 >> idade3;

    // soma de todas as idades
    soma = idade1 + idade2 + idade3;
    // determina a maior idade
    maiorIdade = max(idade1, max(idade2, idade3));
    // determina a menor idade
    menorIdade = min(idade1, min(idade2, idade3));
    // determina a idade de Camila (idade do meio)
    camilaIdade = soma - (maiorIdade + menorIdade);

    cout << camilaIdade << endl;
    return 0;
}
