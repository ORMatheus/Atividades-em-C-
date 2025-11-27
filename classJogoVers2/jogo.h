#include <string>
#include <iostream>
using namespace std;

class Jogo{
    private:
    float valorJogo;
    string nomeJogo;
    int horasjogadas;

    public:
    Jogo(float valorJogo,string nomeJogo,int horasJogadas);
    ~Jogo();
    float getValor() const;
    string getNomeJogo() const;
    void setValorJogo(float valorJogo);
    void setHorasjogadas(int horasJogadas);
    float valorPorHoras();
    void display();
};


