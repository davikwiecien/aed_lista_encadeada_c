#include "listar_diretores.h"

void listar_diretores(Lista_Encadeada_Diretores *lista_diretores) {

    struct Elemento_Diretor *aux = lista_diretores->primeiro;

    /*
    for(int x = 0; x < lista_diretores->num_elementos; ++x) {

        printf("\nid = %d", aux->diretor->id);
        printf("\nnome = %s", aux->diretor->nome);
        printf("\nano de nascimento = %d", aux->diretor->ano_nasc);
        printf("\nnacionalidade = %s\n", aux->diretor->nacionalidade);

        aux = aux->prox;

    }
    */

    while(aux) {

        printf("\nid = %d", aux->diretor->id);
        printf("\nnome = %s", aux->diretor->nome);
        printf("\nano de nascimento = %d", aux->diretor->ano_nasc);
        printf("\nnacionalidade = %s\n", aux->diretor->nacionalidade);

        aux = aux->prox;

    }

    return;

}
