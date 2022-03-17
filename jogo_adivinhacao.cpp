#include<iostream>

using namespace std;

int main()
{
    cout << "*********************************" << endl;
    cout << "******* Bem vindo ao jogo *******" << endl;
    cout << "*********************************" << endl;

    const int NUMERO_SECRETO = 42;

    bool acertou = false;
    int tentativas = 0;
    while (!acertou)
    {
        tentativas++;
        int chute;

        cout << "\n\rTentativa número " << tentativas << endl;
        cout << "Qual o seu chute? " << endl;
        cin >> chute;

        if (chute == NUMERO_SECRETO)
        {
            acertou = true;
            cout << "Parabéns" << endl;
        }
        else if (chute < NUMERO_SECRETO)
            cout << "Seu chute é menor" << endl;
        else
            cout << "Seu chute é maior" << endl;
    }

    cout << "Fim de jogo!" << endl;
    cout << "Voce acertou o número secreto em " << tentativas << " tentativas" << endl;

    return 0;
}