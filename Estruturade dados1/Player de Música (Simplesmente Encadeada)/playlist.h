#include "music.h"
#include <iostream>

class Node {
public:
    Music musica;
    Node* next;

    Node() {
        next = nullptr;
    }

    Node(const Music& m){
        musica = m;
        next = nullptr;
    }
};


//lista para gerenciar os nos

class Playlist{
    private:
        Node* head; // começo da lista
    
    public:
        Playlist():head(nullptr){}

    //destrutor para limpar a memoria ao fechar o programa
        ~Playlist(){
            Node* atual= head;
            while(atual != nullptr){
                Node* temp=atual;
                atual=atual->next;
                delete temp;
            }
        }
};
