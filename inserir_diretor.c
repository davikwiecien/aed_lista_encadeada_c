#include "inserir_diretor.h"

void inserir_diretor(Diretor *novo_diretor, Lista_Encadeada_Diretores *lista_diretores) {

    struct Elemento_Diretor *novo_elemento_diretor = malloc(sizeof * novo_diretor);

    if(!novo_elemento_diretor) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    novo_elemento_diretor->prox = NULL;
    novo_elemento_diretor->diretor = novo_diretor;

    if(!(lista_diretores->num_elementos)) {

        lista_diretores->primeiro = novo_elemento_diretor;
        lista_diretores->ultimo = novo_elemento_diretor;
        ++(lista_diretores->num_elementos);

        return;

    }

    lista_diretores->ultimo->prox = novo_elemento_diretor;
    lista_diretores->ultimo = novo_elemento_diretor;
    ++(lista_diretores->num_elementos);

    return;

}
