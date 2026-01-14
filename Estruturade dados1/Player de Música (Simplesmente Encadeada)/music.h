#ifndef MUSIC_H
#define MUSIC_H

#include <string>
#include <iostream>
using namespace std;

class Music{
private:
    string nomeMusic;
    string artista;
    string album;
    string ano;
    float nota;

public:
    Music();
    Music(string nomeMusic, string artista);
    Music(string nomeMusic, string artista, string album, string ano, float nota);

    string getNomeMusic() const;
    string getNomeArtista() const;
    string getNomeAlbum() const;
    string getAno() const;
    float getNota() const;

    void setAno(string ano);
    void setNota(float nota);
    void setNomeMusic(string nomeMusic);
    void setNomeArtista(string nomeArtista);
    void setAlbum(string album);
    void display() const;
};

#endif
