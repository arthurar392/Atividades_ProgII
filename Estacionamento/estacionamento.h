#ifndef estacionamento_h
#define estacionamento_h

namespace est
{

class Estacionamento
{
    private:
    float valorH;
    float valorF;
    int h;
    
    public:
    Estacionamento(float v);
    void calcV(float t);
    void show();
};

}
#endif