#include "music.h"
#include <iostream>

Music::Music(string NomeMusic,string Artista,string Album,string Ano,float Nota){
    this->nomeMusic = NomeMusic;
    this->artista   = Artista;
    this->album     = Album;
    this->ano       = Ano;
    this->nota      = Nota;
}

// ✅ Construtor padrão
Music::Music(){
    this->nomeMusic = "";
    this->artista   = "";
    this->album     = "";
    this->ano       = "";
    this->nota      = 0.0f;
}

// ✅ Construtor simplificado
Music::Music(string NomeMusic, string Artista){
    this->nomeMusic = NomeMusic;
    this->artista   = Artista;
    this->album     = "";
    this->ano       = "";
    this->nota      = 0.0f;
}

string Music::getNomeMusic() const { return this->nomeMusic; }
string Music::getNomeArtista() const { return this->artista; }
string Music::getNomeAlbum() const { return this->album; }
string Music::getAno() const { return this->ano; }
float  Music::getNota() const { return this->nota; }

void Music::setAno(string ano){ this->ano = ano; }
void Music::setNota(float nota){ this->nota = nota; }
void Music::setAlbum(string album){ this->album = album; }
void Music::setNomeArtista(string nomeArtista){ this->artista = nomeArtista; }
void Music::setNomeMusic(string nomeMusic){ this->nomeMusic = nomeMusic; }

void Music::display() const{
    cout << "Nome da musica: " << nomeMusic << endl;
    cout << "Nome do artista: " << artista << endl;
    cout << "Album: " << album << endl;
    cout << "Ano: " << ano << endl;
    cout << "Nota: " << nota << endl;
}
