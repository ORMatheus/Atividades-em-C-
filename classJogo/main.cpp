#include "jogo.h"


int main(){
    Jogo gears(350.00,"Gears",8);
    int valor=gears.getValor();
    
    gears.display();
    
    system("Pause");
    return 0;
}