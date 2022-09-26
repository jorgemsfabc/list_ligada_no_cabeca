#include "lista_no_cabeca.h"
#include <stdlib.h>
#include <stdio.h>

int vazia(LISTA_LIGADA *lista)
{
    return (lista->cabeca->proximo == NULL);
}

int remover_item(LISTA_LIGADA *lista, int chave)
{
    if (!vazia(lista))
    {
        NO *paux = lista->cabeca;

        while (paux->proximo != NULL &&
               paux->proximo->item->chave != chave)
        {
            paux = paux->proximo;
        }

        if (paux->proximo != NULL)
        {
            NO *prem = paux->proximo;
            paux->proximo = prem->proximo;

            if (prem == lista->fim)
            {
                lista->fim = paux;
            }

            apagar_no(prem);
            lista->tamanho--;
            return 1;
        }
    }
    return 0;
}

int inserir_item(LISTA_LIGADA *lista, ITEM *item)
{
    NO *pnovo = (NO *)malloc(sizeof(NO));

    if (pnovo != NULL)
    {
        pnovo->item = item;
        pnovo->proximo = NULL;

        if (lista->cabeca == NULL)
        {
           lista->cabeca = pnovo;
            lista->cabeca->proximo = pnovo;
        }
        else
        {
            lista->fim->proximo = pnovo;
        }

        lista->fim = pnovo;
        lista->tamanho++;
        return 1;
    }
    else
    {
        return 0;
    }
}

LISTA_LIGADA *criar_lista()
{
    LISTA_LIGADA *lista = (LISTA_LIGADA *)malloc(sizeof(LISTA_LIGADA));

    if (lista != NULL)
    {
        lista->cabeca = NULL;
        lista->fim = NULL;
        lista->tamanho = 0;
    }

    return lista;
}

ITEM *recuperar_item(LISTA_LIGADA *lista, int chave)
{
    NO *paux = lista->cabeca->proximo;

    while (paux != NULL)
    {
        if (paux->item->chave == chave)
        {
            return paux->item;
        }
        paux = paux->proximo;
    }

    return NULL;
}
