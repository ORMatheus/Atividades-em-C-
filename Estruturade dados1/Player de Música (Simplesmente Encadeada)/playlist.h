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
}
