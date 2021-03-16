// TADs lineares (lista, pilha e fila) com aloca��o encadeada (din�mica)

// tipo exportado
// define o TipoItem que � o tipo dos elementos dos TADs
typedef struct
{
    int chave;
    // outros campos
}TipoItem;

// tipo exportado
// define o TipoCelula que e o tipo das celulas que contem os elementos que sao manipulados pelos TADs
typedef struct celula
{
    TipoItem item;
    struct celula *proximo;
}TipoCelula;

// -----TAD pilha-----

// tipo exportado
// define o TipoPilha que e o tipo do TAD pilha
typedef struct
{
    TipoCelula *topo;
    TipoCelula *fundo;
}TipoPilha;

// funcoes exportadas
// cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

// testa se a pilha esta vazia
int TestaPilhaVazia(TipoPilha *pilha);

// insere um elemento do tipo TipoItem na pilha
void InserePilha(TipoPilha *pilha, TipoItem item);

// remove um elemento do tipo TipoItem da pilha
void RemovePilha(TipoPilha *pilha, TipoItem *item);

// imprime os elementos da pilha
void ImprimePilha(TipoPilha *pilha);
