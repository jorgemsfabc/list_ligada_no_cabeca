#include <stdio.h>
#include "Item.h"

void apagar_no(NO *no)
{
    if (no != NULL)
    {
        apagar_item(no->item);
        free(no);
    }
}

void apagar_item(ITEM *item)
{
    free(item);
}

ITEM *criar_item(int chave)
{
    ITEM *item = (ITEM *)malloc(sizeof(ITEM));

    item->chave = chave;
    return item;
}