
#ifndef CIRCULO_H
#define CIRCULO_H

typedef struct Coordenada{
    float x;
    float y;
} Coordenada;

typedef struct Circulo Circulo;

/**!
 * @brief Função que cria um circulo com centro (x,y) e raio r 
 * @param x posição do circulo no eixo x
 * @param y posição do circulo no eixo y
 * @param r tamanho do raio do circulo
 * @return retorna o circulo alocado
 * */
Circulo *circ_cria(float x, float y, float r);

/**!
 * @brief Função que desaloca/libera a estrutura alocada na memória
 * @param c Estrura circulo que será desalocada/liberada
 * @return retorna o circulo criado
 * */
void circ_libera(Circulo *c);

/**!
 * @brief Função que calcula a area de um circulo 
 * @param c Circulo que terá sua area calculada
 * @return Retorna o valor da área do circulo
 * */
float circ_area(Circulo *c);

/**!
 * @brief Função que verifica se dois circulos tem o mesmo centro 
 * @param c1 circulo para comparação do centro com relacão a c2
 * @param c2 circulo para comparação do centro com relacão a c1
 * @return retorna 1 caso forem concentricos, caso contrário retorna 0
 * */
int circ_concentricos(Circulo *c1, Circulo *c2);

/**!
 * @brief Função que obtém o raio de um circulo 
 * @param c circulo a ser extraído o raio
 * @return retorna o valor do raio do circulo c
 * */
float circ_raio(Circulo *c);

/**!
 * @brief Função que obtém as coordenadas do circulo 
 * @param c circulo a ser extraído a coordenada
 * @return retorna uma esturura coordenada do circulo
 * */
Coordenada circ_coordenada(Circulo *c);

#endif