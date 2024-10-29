#include <iostream>
#include <Foco.hpp>
#include <list>
using namespace std;

class SerieNavidad
{
private:
    std::list<Foco> focos;

public:
    SerieNavidad(int nofocos)
    {
        for (size_t i = 0; i < nofocos; i++)
        {
            Foco foco1;
            this->focos.emplace_back(foco1);
        }
    }

    ~SerieNavidad() {}
    void Encender()
    {
        system("color 84");
        for (auto &&f : focos)
        {
            f.Encender();
        }
    
    }
    void Imprimir()
    {
        for (auto &&focoActual : focos)
        {
            std::cout
                << focoActual.Imprimir()
                << "-";
        }
        std::cout << std::endl;
    }
};