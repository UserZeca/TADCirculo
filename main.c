#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"

int main(){

    Circulo *c1 = circ_cria(5, 5, 10);
    Circulo *c2 = circ_cria(5, 5, 6);
    Coordenada coordenadaC1 = circ_coordenada(c1);
    Coordenada coordenadaC2 = circ_coordenada(c2);

    printf("- Circulo C1\n(X,Y) = (%f,%f)\nraio = %f\n", coordenadaC1.x, coordenadaC1.y, circ_raio(c1));
    printf("Area do circulo: %f\n\n", circ_area(c1));
    printf("- Circulo C2\n(X,Y) = (%f,%f)\nraio = %f\n", coordenadaC2.x, coordenadaC2.y, circ_raio(c2));
    printf("Area do circulo: %f\n\n", circ_area(c2));

    if(circ_concentricos(c1, c2))
        printf("Os circulo sao concentricos\n");
    else
        printf("Os circulo nao sao concentricos\n");

    circ_libera(c1);
    circ_libera(c2);
    return 0;
}