#include "music.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <limits>

using namespace std;

string paraMinusc(const string &texto){
    string copia = texto;
    for(size_t i = 0; i < copia.length(); ++i){
        copia[i] = tolower((unsigned char)copia[i]);
    }
    return copia;
}

int main(){
    vector<Music> musicas;
    char opcao = 's';
    while (opcao == 's' || opcao == 'S'){
        string tempNomeMusica;
        string tempNomeArtista;
        string tempNomeAlbum;
        string tempAno;
        float tempNota = 0.0f;
        bool jaExiste = false;

        cout << "Cadastre uma nova Musica !!\n";

        cout << "Digite o nome da Musica: ";
        if(cin.peek() == '\n') cin.ignore();
        getline(cin, tempNomeMusica);

        for(size_t i = 0; i < musicas.size(); ++i){
            if(paraMinusc(musicas[i].getNomeMusic()) == paraMinusc(tempNomeMusica)){
                jaExiste = true;
                break;
            }
        }

        if(jaExiste){
            cout << "Musica ja cadastrada.\n";
        } else {
            cout << "Digite o nome do Artista: ";
            getline(cin, tempNomeArtista);

            cout << "Digite o nome do Album: ";
            getline(cin, tempNomeAlbum);

            cout << "Digite o ano: ";
            getline(cin, tempAno);

            cout << "Digite a nota (ex: 8.5): ";
            cin >> tempNota;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            Music m(tempNomeMusica, tempNomeArtista, tempNomeAlbum, tempAno, tempNota);
            musicas.push_back(m);
            cout << "Musica cadastrada com sucesso.\n";
        }

        cout << "Deseja cadastrar outra musica? (s/n): ";
        cin >> opcao;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cout << "\nMúsicas cadastradas:\n";
    for(size_t i = 0; i < musicas.size(); ++i){
        musicas[i].display();
        cout << "---------------------\n";
    }
    system("pause");
    return 0;
}