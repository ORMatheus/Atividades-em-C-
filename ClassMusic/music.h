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
    Music(string nomeMusic,string artista,string album,string ano, float nota);
    
    string getNomeMusic()const;
    string getNomeArtista() const;
    string getNomeAlgum() const ;
    string getAno() const ;
    float getNota() const;

    //setters
    
};