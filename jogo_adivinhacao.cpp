#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    bool acertou = false;
    int tentativas = 0;
    double pontos = 1000.0;
    char dificuldade;
    int numeroTentativas;

    cout << "*********************************" << endl;
    cout << "******* Bem vindo ao jogo *******" << endl;
    cout << "*********************************" << endl;

    cout << "Escolha a sua dificuldade" << endl;
    cout << "Fácil (F)  Médio (M)  Difícil (D)" << endl;
    cin >> dificuldade;


    switch (dificuldade)
    {
    case 'F':
    case 'f':
        numeroTentativas = 15;
        break;

    case 'M':
    case 'm':
        numeroTentativas = 10;
        break;
    default:
        numeroTentativas = 5;
        break;
    }

    //while (!acertou)
    for (tentativas = 1; tentativas <= numeroTentativas; tentativas++)
    {
        int chute;

        cout << "\n\rTentativa número " << tentativas << endl;
        cout << "Qual o seu chute? " << endl;
        cin >> chute;

        double pontosPerdidos = abs(chute - NUMERO_SECRETO) / 2.0;
        pontos -= pontosPerdidos;

        if (chute == NUMERO_SECRETO)
        {
            acertou = true;
            break;
            cout << "Parabéns" << endl;
        }
        else if (chute < NUMERO_SECRETO)
            cout << "Seu chute é menor" << endl;
        else
            cout << "Seu chute é maior" << endl;
    }

    cout << "Fim de jogo!" << endl;

    if (!acertou)
        cout << "Você perdeu, tente novamente !" << endl;
    else
    {
        cout << "Voce acertou o número secreto em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi " << pontos << endl;
    }

    return 0;
}