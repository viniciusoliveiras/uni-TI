//TAD arvore binaria com alocacao encadeada (dinamica)

//tipo exportado
//define o TipoItem que e o tipo dos elementos do TAD arvore binaria
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoArvore que e o tipo das celulas que contem os elementos que sao manipulados pelo TAD arvore binaria
typedef struct arvore
{
    TipoItem item;
    struct arvore *esquerda;
    struct arvore *direita;
}TipoArvore;

//tipo exportado
//define o TipoCelula que e o tipo das celulas que contem os elementos que sao manipulados pelos TADs fila e pilha
typedef struct celula
{
    TipoArvore **item;
    struct celula *proximo;
}TipoCelula;

//-----TAD arvore binaria-----

//funcoes exportadas
//cria uma arvore binaria vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore);

//testa se a arvore binaria e vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore);

//cria uma arvore binaria
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita);

//libera a arvore binaria
TipoArvore * LiberaArvoreBinaria(TipoArvore **arvore);

//verifica se um elemento pertence a arvore binaria
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item);



int AlturaDoNo(TipoArvore **arvore, TipoItem item);



//imprime os elementos da arvore binaria
void ImprimeArvoreBinaria(TipoArvore **arvore, int l);

//percorre os elementos da arvore binaria em pre-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore);

//percorre os elementos da arvore binaria em ordem simetrica / em-ordem
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore);

//percorre os elementos da arvore binaria em pos-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore);

//percorre os elementos da arvore binaria em nivel
void PercorreArvoreBinariaLargura(TipoArvore **arvore);

//percorre os elementos da arvore binaria em nivel
void PercorreArvoreBinariaProfundidade(TipoArvore **arvore);

//calcula a altura de um no da arvore binaria
int CalculaAlturaArvoreBinaria(TipoArvore **arvore);

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que e o tipo do TAD pilha
typedef struct
{
    TipoCelula *topo;
    TipoCelula *fundo;
}TipoPilha;

//funcoes exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha e vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoArvore na pilha
void InserePilha(TipoPilha *pilha, TipoArvore **item);

//remove um elemento do tipo TipoArvore da pilha
void RemovePilha(TipoPilha *pilha, TipoArvore **item);

//-----TAD fila-----

//tipo exportado
//define o TipoFila que e o tipo do TAD fila
typedef struct
{
    TipoCelula *frente;
    TipoCelula *tras;
}TipoFila;

//funcoes exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila e vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoArvore na fila
void InsereFila(TipoFila *fila, TipoArvore **item);

//remove um elemento do tipo TipoArvore da fila
void RemoveFila(TipoFila *fila, TipoArvore **item);
