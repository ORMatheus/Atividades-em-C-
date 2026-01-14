#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "music.h"
#include <iostream>
#include <string>

using namespace std;
class Node {
public:
    Music musica; // Seu objeto Music original
    Node* next;   // O ponteiro para o próximo nó

    // Construtor padrão (nó "vazio")
    Node() {
        next = nullptr;
    }

    // Construtor com música
    Node(Music m) {
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
        // função para adicionar ao final similar ao push_back em vetores
        
        void adicionarMusica(Music m){
            Node* novoNo=new Node(m);
        
            if(head== nullptr){
                head=novoNo;
            }else{
                Node* atual=head;
                while(atual->next != nullptr){
                    atual=atual->next;
                }
                atual->next=novoNo;
            }
        }

        //função para verificar duplicidade(serve para substituir o loop de vector)

        bool existeMusica(string nomeBusca,string(*funcNormaliza)(const string&)){
            Node* atual=head;
            while (atual != nullptr)
            {
                if(funcNormaliza(atual->musica.getNomeMusic()) == funcNormaliza(nomeBusca)) {
                    return true;
                }
                atual=atual->next;
            }
            return false;
        }

         // Função para exibir tudo
    void exibirPlaylist() const {
        if (head == nullptr) {
            cout << "Playlist vazia!\n";
            return;
        }
        Node* atual = head;
        while (atual != nullptr) {
            atual->musica.display(); // Reusa seu método display original
            cout << "---------------------\n";
            atual = atual->next;
        }
    }
};

#endif