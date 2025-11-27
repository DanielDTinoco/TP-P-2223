#ifndef SISTEMAS_H_INCLUDED
#define SISTEMAS_H_INCLUDED

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


#define CODE_LEN 4

typedef struct station station, *pstation;
typedef struct line line, *pline;

struct station {
    char nome[100]; // Nome da esta��o
    char codigo[5]; // C�digo da esta��o
};

struct line {
    char nome[100]; // Nome a linha.
    pstation stations_in_line; // Array dinamico de esta��es presentes na linha.
    int station_count; // Quantidade de esta��es presentes na linha.
    pline prox; // Ponteiro para a proxima linha.
};

#endif // SISTEMAS_H_INCLUDED
