#include <SerieNavidad.hpp>

int main(int argc, char const *argv[])
{
    SerieNavidad S1(10);
    SerieNavidad S2(5);
    SerieNavidad S3(15);

    S1.Encender();
    S1.Imprimir();

    S2.Encender();
    S2.Imprimir();

    S3.Encender();
    S3.Imprimir();

    return 0;
}
