#ifndef LISTA_NO_CABECA_H
#define LISTA_NO_CABECA_H

#include "Item.h"

struct lista_ligada
{
    NO *cabeca;
    NO *fim;
    int tamanho;
};

typedef struct lista_ligada LISTA_LIGADA;

int remover_item(LISTA_LIGADA *lista, int chave);

int vazia(LISTA_LIGADA *lista);

int inserir_item(LISTA_LIGADA *lista, ITEM *item);

LISTA_LIGADA *criar_lista();

ITEM *recuperar_item(LISTA_LIGADA *lista, int chave);


#endif