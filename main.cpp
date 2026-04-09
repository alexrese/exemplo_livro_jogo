#include <iostream>
using namespace std;

int main() {
    int escolha1, escolha2, escolha3;

    // Desenho ASCII do professor
    cout << "=====================================\n";
    cout << "        PROFESSOR ALEX RESE\n";
    cout << "=====================================\n";
    cout << "         WWWWWWWWWWW\n";
    cout << "         |         |\n";
    cout << "         |  O   O  |\n";
    cout << "         |    ^    |\n";
    cout << "         |  \\___/  |\n";
    cout << "         XXXXXXXXXXX\n";
    cout << "         ___| |___\n";
    cout << "    0_n_|         |_n_0\n";
    cout << "        |  PROF   |\n";
    cout << "        |_________|\n";
    cout << "           /   \\\n";
    cout << "         _/     \\_\n";
    cout << "=====================================\n\n";

    cout << "Voce eh um professor de programacao.\n";
    cout << "Hoje eh um dia decisivo na universidade.\n";

    cout << "\nAntes da aula, o que voce decide?\n";
    cout << "1 - Preparar detalhadamente a aula\n";
    cout << "2 - Confiar na experiencia e improvisar\n";
    cout << "Escolha: ";
    cin >> escolha1;

    if (escolha1 == 1) {
        cout << "\nVoce preparou uma aula excelente.\n";

        cout << "Durante a aula, os alunos parecem confusos.\n";
        cout << "O que voce faz?\n";
        cout << "1 - Explica novamente com exemplos\n";
        cout << "2 - Segue o conteudo normalmente\n";
        cout << "Escolha: ";
        cin >> escolha2;

        if (escolha2 == 1) {
            cout << "\nOs alunos entenderam melhor.\n";

            cout << "Um coordenador observa sua aula.\n";
            cout << "O que voce faz?\n";
            cout << "1 - Demonstra dominio\n";
            cout << "2 - Encerra rapido\n";
            cout << "Escolha: ";
            cin >> escolha3;

            if (escolha3 == 1) {
                cout << "\nSucesso! Voce foi reconhecido.\n";
            } else {
                cout << "\nVoce perdeu a oportunidade.\n";
            }

        } else {
            cout << "\nOs alunos nao acompanharam.\n";

            cout << "O que voce faz?\n";
            cout << "1 - Revisa o conteudo\n";
            cout << "2 - Mantem como esta\n";
            cout << "Escolha: ";
            cin >> escolha3;

            if (escolha3 == 1) {
                cout << "\nBoa recuperacao da turma.\n";
            } else {
                cout << "\nTurma desmotivada.\n";
            }
        }

    } else {
        cout << "\nVoce improvisou a aula.\n";

        cout << "O que voce faz?\n";
        cout << "1 - Tenta responder tudo\n";
        cout << "2 - Evita perguntas\n";
        cout << "Escolha: ";
        cin >> escolha2;

        if (escolha2 == 1) {
            cout << "\nAlgumas respostas funcionaram.\n";

            cout << "O que voce faz no final?\n";
            cout << "1 - Passa exercicio\n";
            cout << "2 - Encerra aula\n";
            cout << "Escolha: ";
            cin >> escolha3;

            if (escolha3 == 1) {
                cout << "\nAula recuperada.\n";
            } else {
                cout << "\nAula fraca.\n";
            }

        } else {
            cout << "\nInseguranca percebida.\n";

            cout << "O que voce faz?\n";
            cout << "1 - Estuda mais\n";
            cout << "2 - Ignora\n";
            cout << "Escolha: ";
            cin >> escolha3;

            if (escolha3 == 1) {
                cout << "\nEvolucao profissional.\n";
            } else {
                cout << "\nRisco na carreira.\n";
            }
        }
    }

    return 0;
}
