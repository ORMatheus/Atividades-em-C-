#include "music.h"

Music::Music(string NomeMusic,string Artista,string Album,string Ano,float Nota){
    this -> nomeMusic=NomeMusic;
    this-> artista=Artista;
    this ->album=Album;
    this->ano=Ano;
    this->nota=Nota;
}

string Music::getNomeMusic() const{
    return this->nomeMusic;
}

string  Music::getNomeArtista() const {
    return this->artista;
}

string Music::getNomeAlbum() const{
    return this->album;
}

string Music::getAno() const{
    return this->ano;
}

float Music::getNota() const{
    return this->nota;
}

