#include "music.h"
#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <limits>
#include <algorithm>

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

            // validação do ano: apenas dígitos
            cout << "Digite o ano (apenas numeros, ex: 2020): ";
            while (true) {
                getline(cin, tempAno);
                bool ok = !tempAno.empty();
                for (char c : tempAno) {
                    if (!isdigit((unsigned char)c)) { ok = false; break; }
                }
                if (ok) break;
                cout << "Ano invalido. Digite apenas numeros (ex: 2020): ";
            }

            // validação da nota: número float entre 0 e 10
            while (true) {
                cout << "Digite a nota (ex: 8.5): ";
                if (!(cin >> tempNota)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Entrada invalida. Digite um numero (ex: 8.5).\n";
                    continue;
                }
                if (tempNota < 0.0f || tempNota > 10.0f) {
                    cout << "Nota deve estar entre 0 e 10. Tente novamente.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                break;
            }

            Music m(tempNomeMusica, tempNomeArtista, tempNomeAlbum, tempAno, tempNota);
            musicas.push_back(m);
            cout << "Musica cadastrada com sucesso.\n";
        }

        // validação da opção s/n
        string opcaoStr;
        while (true) {
            cout << "Deseja cadastrar outra musica? (s/n): ";
            getline(cin, opcaoStr);
            if (opcaoStr.empty()) continue;
            opcao = opcaoStr[0];
            if (opcao == 's' || opcao == 'S' || opcao == 'n' || opcao == 'N') break;
        }
    }

    cout << "\nMúsicas cadastradas:\n";
    for(size_t i = 0; i < musicas.size(); ++i){
        musicas[i].display();
        cout << "---------------------\n";
    }
    system("pause");
    return 0;
}