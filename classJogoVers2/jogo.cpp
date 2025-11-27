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
    cout << "Valor paga em " << nomeJogo << " foi de " << valorJogo<< " R$."<<endl;
    cout << "Horas contabilizadas ate o momento:" << horasjogadas<<endl;
    cout << "O Valor gasto por cada Hora jogada Foi de " <<valorJogo<<" R$" <<" dividido " <<horasjogadas << " horas" <<  endl; 
    cout <<  "Cada Hora saiu no valor de :" <<valorPorHoras() << "R$";
}

float Jogo::valorPorHoras(){
    float quantoCustoHoras=this->valorJogo/this->horasjogadas;
    return quantoCustoHoras;
}

Jogo::~Jogo() {
    // Pode deixar vazio, já que não há limpeza manual a fazer.
    // Dica opcional: Adicione um cout aqui para ver quando o objeto morre!
    // cout << "O jogo " << this->nomeJogo << " foi removido da memoria." << endl;
}


