//TADs lineares (lista, pilha e fila) com aloca��o encadeada (din�mica)

//tipo exportado
//define o TipoItem que � o tipo dos elementos dos TADs
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoCelula que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelos TADs
typedef struct celula
{
    TipoItem item;
    struct celula *proximo;
}TipoCelula;

//-----TAD fila-----

//tipo exportado
//define o TipoFila que � o tipo do TAD fila
typedef struct
{
    TipoCelula *frente;
    TipoCelula *tras;
}TipoFila;

//fun��es exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila � vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoItem na fila
void InsereFila(TipoFila *fila, TipoItem item);

//remove um elemento do tipo TipoItem da fila
void RemoveFila(TipoFila *fila, TipoItem *item);

//imprime os elementos da fila
void ImprimeFila(TipoFila *fila);
