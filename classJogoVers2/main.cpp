#include "jogo.h"
#include <iostream>
#include <limits>
#include <vector>
#include <cctype> // para poder utilizar o tolower

using namespace std;
string paraMinusc(string texto){
    string copia=texto;
    for(int i =0 ; i < copia.length() ; i++){
        copia[i] =tolower(copia[i]);    
    }
    return copia;
}

int main(){
  //difere pois cria uma lista vazia para guardar cada objeto que for criado
  
    vector<Jogo> biblioteca;
    char opcao= 's'; //flag pra verificação 
    while(opcao == 's' || opcao == 'S'){
        string tempNome;
        int tempHoras;
        float tempValor;
        bool jaExiste=false; //flag pra verificação 

        cout << "Novo Cadastro de jogo!!\n";
        
        cout << "Digite o nome do Jogo:";
        //por verificação limpar o buffer do ultimo cin
        if(cin.peek()== '\n'){
            cin.ignore();
        }
        getline(cin,tempNome);

        for(int i =0 ; i < biblioteca.size() ; i++){
            if(paraMinusc(biblioteca[i].getNomeJogo()) == paraMinusc(tempNome) ){
                jaExiste=true;
                break;
            }
        }

        if(jaExiste){
            cout << "ERRO: O jogo " << tempNome << "Ja foi cadastrado!" << endl;
        }else { //caso n exista
            cout << "Digite o Valor Pago:";
            cin >> tempValor;
            cout << "Digite as horas jogadas:";
            cin >> tempHoras;


            Jogo novoJogo(tempValor,tempNome,tempHoras);
            biblioteca.push_back(novoJogo);
            cout << "Jogo cadastrado com sucesso!" << endl;
        }
        cout << "\nDeseja cadastrar outro? (s/n): ";
        cin >> opcao;
    }

    cout << "\n=== Resumo da Biblioteca ===\n" << endl;
    for(int i = 0; i < biblioteca.size(); i++){
        biblioteca[i].display();
        cout << "------------------" << endl;
    }

    return 0;
}