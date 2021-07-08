//TAD lista linear com aloca��o encadeada (din�mica)

//tipo exportado
//define o TipoItem que � o tipo dos elementos do TAD
typedef struct
{
    float coeficiente;
    int grau;
}TipoItem;

//tipo exportado
//define o TipoCelula que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelos TAD
typedef struct celula
{
    TipoItem item;
    struct celula *proximo;
}TipoCelula;

//-----TAD lista-----

//tipo exportado
//define o TipoLista que � o tipo do TAD lista
typedef struct
{
    TipoCelula *primeiro;
    TipoCelula *ultimo;
}TipoLista;

//fun��es exportadas
//cria uma lista vazia
void CriaListaVazia(TipoLista *lista);

//testa se a lista � vazia
int TestaListaVazia(TipoLista *lista);

//insere um elemento do tipo TipoItem na lista
void InsereLista(TipoLista *lista, TipoItem item);

//remove um elemento do tipo TipoItem da lista
void RemoveLista(TipoLista *lista, TipoItem *item, TipoCelula *pt);

//imprime os elementos da lista
void ImprimeLista(TipoLista *lista);
