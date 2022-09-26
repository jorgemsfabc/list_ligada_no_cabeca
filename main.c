#include "lista_no_cabeca.c"
#include "Item.c"


int main()
{

    LISTA_LIGADA *lista;

    lista = criar_lista();

    inserir_item(lista, criar_item(1));
    inserir_item(lista, criar_item(2));
    inserir_item(lista, criar_item(3));

    ITEM *item = recuperar_item(lista, 2);

    printf("\n item: %i ", (item==NULL)?-1:item->chave);
}
