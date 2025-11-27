#ifndef PTP_COURSE_H
#define PTP_COURSE_H


#include "sistemas.h"

void simula_percurso(pline linhas, station *paragens, int total);
void simula_percurso_2_linhas(pline p, char *codigo_incial, char *codigo_destino);

#endif //PTP_COURSE_H
