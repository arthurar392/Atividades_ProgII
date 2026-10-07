#include <iostream>
#include "estacionamento.h"

int main(void)
{
    est::Estacionamento x(12.50f);

    x.calcV(200.00f);
    x.show();
return 0;
}