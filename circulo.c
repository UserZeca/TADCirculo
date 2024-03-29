#include <stdio.h>
#include <stdlib.h>
#include "circulo.h"
#define _USE_MATH_DEFINES // for C
#include <math.h>

typedef struct Circulo{
    Coordenada coordenada;
    float raio;
} Circulo;

Circulo *circ_cria(float x, float y, float r){

    Circulo *novoCirculo = malloc(sizeof(Circulo));

    if(novoCirculo == NULL){
        printf("Nao foi possivel criar um circulo\n");
        exit(1);
    }

    novoCirculo->coordenada.x = x;
    novoCirculo->coordenada.y = y;
    novoCirculo->raio = r;

    return novoCirculo;
}

void circ_libera(Circulo *c){
    free(c);
    printf("Estrutura circulo desalocada da memoria\n");
}

float circ_area(Circulo *c){
    return M_PI*pow(c->raio, 2);
}

int circ_concentricos(Circulo *c1, Circulo *c2){
    return (c1->coordenada.x == c2->coordenada.x) && (c1->coordenada.y == c2->coordenada.y) ? 1: 0; 
}

float circ_raio(Circulo *c){
    return c->raio;
}

Coordenada circ_coordenada(Circulo *c){
    Coordenada coordenadaCirculo;
    coordenadaCirculo.x = c->coordenada.x;
    coordenadaCirculo.y = c->coordenada.y;
    return coordenadaCirculo;
}
