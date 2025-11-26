#include "jogo.h"
#include <iostream>
#include <string>

using namespace std;
Jogo::Jogo(float valor,string nome,int horas){
    this->valorJogo=valor;
    this->nomeJogo=nome;
    this->horasjogadas=horas;
}


float Jogo::getValor() const{
    return this->valorJogo;
}

string Jogo::getNomeJogo() const{
    return this->nomeJogo;
}

void Jogo::setValorJogo(float valor){
    this->valorJogo=valor;
    cout <<"Valor pago:" <<valorJogo <<"R$"<<endl;
}

void Jogo::setHorasjogadas(int horastualizada){
    this->horasjogadas=horasjogadas;
    cout<< "Horas Jogadas:" << horasjogadas<<endl;
}

void Jogo::display(){
    cout << "Jogo a ser visualizado " << nomeJogo << endl;
    cout << "Valor paga em " << nomeJogo << " foi de" << valorJogo<< " R$."<<endl;
    cout << "Horas contabilizadas ate o momento:" << horasjogadas<<endl;
}

~Jogo(){
    
}


