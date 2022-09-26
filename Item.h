#ifndef ITEM_H
#define ITEM_H

typedef struct ITEM
{
    int chave;
} ITEM;

typedef struct NO
{
    ITEM *item;
    struct NO *proximo;
} NO;

ITEM *criar_item(int chave);

void apagar_no(NO *no);
void apagar_item(ITEM *item);

#endif