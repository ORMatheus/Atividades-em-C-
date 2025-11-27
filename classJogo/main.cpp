#include "jogo.h"
#include <iostream>
#include <limits>


int main(){
    //criar variaveis temporarias para guardar oq o usuario digitar
    float tempValor;
    string tempNome;
    int tempHoras;

    cout << "Cadastrar Jogo" << endl;
    //usar getlin ao invez de cin para guardar espaços tambem
    cout << "Digite o Nome do jogo:";
    getline(cin,tempNome);

    cout << "Digite O valor Pago no Jogo:";
    cin >> tempValor;

    cout <<"Digite as Horas Jogadas:";
    cin >> tempHoras;

    cout << "\n Obrigado por cadastrar seu Jogo." << endl;

    Jogo meujogo(tempValor,tempNome,tempHoras);
    meujogo.display();

    //realizar uma pausa antes de fechar
    cout << endl << "Pressione enter para sair.";
    cin.ignore();
    cin.get();
    
    return 0;
}