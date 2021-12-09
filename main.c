#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Diretor.h"
#include "Lista_Encadeada_Diretores.h"
#include "Elemento_Diretor.h"
#include "inserir_diretor.h"
#include "listar_diretores.h"

int main(void) {

    Lista_Encadeada_Diretores *lista_diretores = malloc(sizeof * lista_diretores);

    if(!lista_diretores) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    printf("\nNum elementos = %d", lista_diretores->num_elementos);
    printf("\nprimeiro = %p", lista_diretores->primeiro);
    printf("\nultimo = %p\n", lista_diretores->ultimo);

    Diretor *d = malloc(sizeof * d);

    if(!d) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    d->id = 0;
    strcpy(d->nome, "Peter Jackson");
    d->ano_nasc = 1961;
    strcpy(d->nacionalidade, "Nova Zelandia");

    inserir_diretor(d, lista_diretores);

    printf("\nNum elementos = %d", lista_diretores->num_elementos);
    printf("\nprimeiro = %p", lista_diretores->primeiro);
    printf("\nultimo = %p\n", lista_diretores->ultimo);

    d = malloc(sizeof * d);

    if(!d) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    d->id = 1;
    strcpy(d->nome, "Steven Spielberg");
    d->ano_nasc = 1946;
    strcpy(d->nacionalidade, "Estados Unidos");

    inserir_diretor(d, lista_diretores);

    printf("\nNum elementos = %d", lista_diretores->num_elementos);
    printf("\nprimeiro = %p", lista_diretores->primeiro);
    printf("\nultimo = %p\n", lista_diretores->ultimo);

    d = malloc(sizeof * d);

    if(!d) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    d->id = 2;
    strcpy(d->nome, "Quentin Tarantino");
    d->ano_nasc = 1963;
    strcpy(d->nacionalidade, "Estados Unidos");

    inserir_diretor(d, lista_diretores);

    printf("\nNum elementos = %d", lista_diretores->num_elementos);
    printf("\nprimeiro = %p", lista_diretores->primeiro);
    printf("\nultimo = %p\n", lista_diretores->ultimo);

    d = malloc(sizeof * d);

    if(!d) {

        printf("\nErro na alocação dinâmica!\n");
        exit(1);

    }

    d->id = 14;
    strcpy(d->nome, "Davi");
    d->ano_nasc = 2001;
    strcpy(d->nacionalidade, "Brasil");

    inserir_diretor(d, lista_diretores);

    printf("\nNum elementos = %d", lista_diretores->num_elementos);
    printf("\nprimeiro = %p", lista_diretores->primeiro);
    printf("\nultimo = %p\n", lista_diretores->ultimo);

    listar_diretores(lista_diretores);

    memset(lista_diretores, '\0', sizeof * lista_diretores);
    free(lista_diretores);

    return 0;

}
