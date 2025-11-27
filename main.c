#include "sistemas.h"
#include "utils.h"
#include "menu.h"


int main()
{
    station *paragens = malloc(sizeof(station));
    int total_paragens = 0;
    pline linhas = NULL;


    if(paragens == NULL)
    {
        printf("\nErro na alocacao da memoria!\n");
        return 0;
    }

    // O programa corre dentro da fun��o menu.
    menu(paragens,&total_paragens,linhas);

    // Liberta a mem�ria alocada �s paragens e linhas.
    free(paragens);
    freelines(linhas);

    return 0;
}
