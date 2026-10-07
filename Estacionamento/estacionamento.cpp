#include <iostream>
#include "estacionamento.h"

est::Estacionamento::Estacionamento(float v):valorH(v)
{};
void est::Estacionamento::calcV(float t)
{
    if (t > 60)
    {
        t = t/60;
        h = (int)t;
        if(h < t)
        h++;
    }
    valorF = valorH * h;
}
void est::Estacionamento::show()
    {
        std::cout << "Tarifa: " << valorF << std::endl;
        std::cout << "Foram cobradas " << h << " Horas" << std::endl;
    }