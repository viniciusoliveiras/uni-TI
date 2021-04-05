//TAD lista linear com alocação encadeada (dinâmica)

//tipo exportado
//define o TipoItem que é o tipo dos elementos do TAD
typedef struct
{
    float coeficiente;
    int grau;
}TipoItem;

//tipo exportado
//define o TipoCelula que é o tipo das células que contêm os elementos que são manipulados pelos TAD
typedef struct celula
{
    TipoItem item;
    struct celula *proximo;
}TipoCelula;

//-----TAD lista-----

//tipo exportado
//define o TipoLista que é o tipo do TAD lista
typedef struct
{
    TipoCelula *primeiro;
    TipoCelula *ultimo;
}TipoLista;

//funções exportadas
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista);

//testa se a lista é vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoItem na lista
void InsereLista(TipoLista *lista, TipoItem item);

//remove um elemento do tipo TipoItem da lista
void RemoveLista(TipoLista *lista, TipoItem *item, TipoCelula *pt);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);
