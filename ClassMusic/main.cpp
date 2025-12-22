#include "music.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

string paraMinusc(string texto){
    string copia= texto;
    for(int i =0 ; i <copia.length() ; i++){
        copia[i]=tolower(copia[i]);
    }

    return copia;
}


using namespace std;

int main(){
    vector<Music> musicas;
    char opcao='s' ;
    while (opcao == 's' || opcao ='S'){
        string tempNome;
        string tempNomeMusica;
        string tempNomeArtista;
        string TempNomeAlbum;
        string tempAno;
        float tempNota;
        bool jaExiste=false;

        cout << "Cadastre uma nova Musica !!\n";

        cout << "Digite o nome da Musica:";
        
    }

    system("pause");
    return 0;
}