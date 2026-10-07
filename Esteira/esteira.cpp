#include <iostream>
#include "esteira.h"

void Esteira::mostrar()
{
    if(velocidadeAtual == -1)
        std::cout << "Erro\n";
    else
    {
    std::cout << "A distancia inicial foi: " << distanciaPercorrida << "\n";
    std::cout << "A velocidade atual é: " <<velocidadeAtual << "\n";
    std::cout << "A marca é: " << marca << "\n";
    }
}
void Esteira::definir()
{
    std::cout << "Defina a marca da esteira" << std::endl;
    std::getline(std::cin >> std::ws, marca);
    std::cout << "Defina velocidade atual (km/h) \n";
    std::cin >> velocidadeAtual;
    velocidadeAtual = testa_limite(velocidadeAtual);
    std::cout << "Defina a distancia percorrida até então\n";
    std::cin >> distanciaPercorrida;
}

double Esteira::testa_limite(double x)
{
    bool b{0.0 <= velocidadeAtual && velocidadeAtual <= 25.0};

    if(b)
        return velocidadeAtual;
    else
        {
            std::cout << "Velocidade fora da faixa\n";
            return -1;
        }
}

void Esteira::aumentarVelocidade(double n)
{
    if(velocidadeAtual != -1)
    velocidadeAtual += n;
    velocidadeAtual = testa_limite(velocidadeAtual);
}

void Esteira::corrida(double h)
{
    if(velocidadeAtual != -1)
        std::cout << "Distancia Final: " << (h * velocidadeAtual + distanciaPercorrida) << std::endl;
    else
        std::cout << "Erro!!!\n";
}
