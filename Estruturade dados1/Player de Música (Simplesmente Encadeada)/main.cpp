#include "music.h"
#include "playlist.h"
#include <cctype>

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

    Music m1("Numb", "Linkin Park");
    Music m2("NUMB", "Linkin Park");

    playlist.adicionarMusica(m1);

    if (playlist.existeMusica("numb", funcNormalize)) {
        cout << "Musica ja existe!\n";
    } else {
        playlist.adicionarMusica(m2);
    }

    playlist.exibirPlaylist();
    system("pause");
    return 0;
}