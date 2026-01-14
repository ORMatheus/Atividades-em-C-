#include "music.h"
#include "playlist.h"
#include <cctype>
#include <limits>

using namespace std;

string funcNormalize(const string& texto){
    string resultado = texto;
    for(char &c : resultado){
        c = (char)tolower((unsigned char)c);
    }
    return resultado;
}

int main(){
    Playlist playlist;
    cout << "Deseja adicionar uma música ?(S/N)"<< endl;
    char continuar;
    cin >> continuar;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');

    while(continuar == 's' || continuar == 'S'){
        string nome;
        string artista;
        cout << "Digite o nome da Musica:";
        getline(cin,nome);
        cout << "\nDigite o nome do Artista:";
        getline(cin,artista);
       cout << "Deseja colocar as demais informacoes? (s/n): ";
        char opInfo;
        cin >> opInfo;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if(opInfo == 's'|| opInfo == 'S' ){
            string album;
            string ano;
            float nota;
            cout << "\nDigite o Nome do album: ";
            getline(cin,album);
            cout << "Digite o ano de lançamento da Música: ";
            getline(cin,ano);
            cout << "\nDigite a nota de 0.0 ate 10.0: "; 
            cin >> nota;
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            Music m(nome,artista,album,ano,nota);
            playlist.adicionarMusica(m);
        }else {
            Music m(nome,artista);
            playlist.adicionarMusica(m);
        }
        cout << "\nDeseja adicionar outra musica?(s/n):";
        cin >> continuar;
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }

    cout << "\n=== Sua playlist ===\n";
    playlist.exibirPlaylist();


    system("pause");
    return 0;
}