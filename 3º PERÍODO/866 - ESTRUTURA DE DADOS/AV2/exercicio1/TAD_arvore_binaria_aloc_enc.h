//TAD �rvore bin�ria com aloca��o encadeada (din�mica)

//tipo exportado
//define o TipoItem que � o tipo dos elementos do TAD �rvore bin�ria
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoArvore que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelo TAD �rvore bin�ria
typedef struct arvore
{
    TipoItem item;
    struct arvore *esquerda;
    struct arvore *direita;
}TipoArvore;

//tipo exportado
//define o TipoCelula que � o tipo das c�lulas que cont�m os elementos que s�o manipulados pelos TADs fila e pilha
typedef struct celula
{
    TipoArvore **item;
    struct celula *proximo;
}TipoCelula;

//-----TAD �rvore bin�ria-----

//fun��es exportadas
//cria uma �rvore bin�ria vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore);

//testa se a �rvore bin�ria � vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore);

//cria uma �rvore bin�ria
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita);

//libera a �rvore bin�ria
TipoArvore * LiberaArvoreBinaria(TipoArvore **arvore);

//verifica se um elemento pertence � �rvore bin�ria
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item);

//imprime os elementos da �rvore bin�ria
void ImprimeArvoreBinaria(TipoArvore **arvore, int l);

//percorre os elementos da �rvore bin�ria em pr�-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore);

//percorre os elementos da �rvore bin�ria em ordem sim�trica
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore);

//percorre os elementos da �rvore bin�ria em p�s-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore);

//percorre os elementos da �rvore bin�ria em n�vel
void PercorreArvoreBinariaLargura(TipoArvore **arvore);

//percorre os elementos da �rvore bin�ria em n�vel
void PercorreArvoreBinariaProfundidade(TipoArvore **arvore);

//calcula a altura de um n� da �rvore bin�ria
int CalculaAlturaArvoreBinaria(TipoArvore **arvore);

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que � o tipo do TAD pilha
typedef struct
{
    TipoCelula *topo;
    TipoCelula *fundo;
}TipoPilha;

//fun��es exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha � vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoArvore na pilha
void InserePilha(TipoPilha *pilha, TipoArvore **item);

//remove um elemento do tipo TipoArvore da pilha
void RemovePilha(TipoPilha *pilha, TipoArvore **item);

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

//insere um elemento do tipo TipoArvore na fila
void InsereFila(TipoFila *fila, TipoArvore **item);

//remove um elemento do tipo TipoArvore da fila
void RemoveFila(TipoFila *fila, TipoArvore **item);
