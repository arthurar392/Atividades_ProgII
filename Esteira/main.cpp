#include <iostream>
#include "esteira.h"

int main(void)
{

    Esteira x;

    x.definir();
    x.mostrar();

    for(int i = 0; i < 10; i++)
    {
    x.corrida(6);
    x.aumentarVelocidade(1);
    }
    x.mostrar();

return 0;
}