#include <music.h>
#include <iostream>

class Node {
public:
    Music musica;
    Node* next;

    Node(){
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
};

