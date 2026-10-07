#ifndef esteira_h
#define esteira_h

#include <string>
class Esteira
{
    private:

    std::string marca;
    double velocidadeAtual;
    double distanciaPercorrida;

    public:

    void mostrar();
    void definir();
    double testa_limite(double x);
    void aumentarVelocidade(double n);
    void corrida(double h);

};

#endif