//TAD árvore binária com alocação encadeada (dinâmica)

//tipo exportado
//define o TipoItem que é o tipo dos elementos do TAD árvore binária
typedef struct
{
    int chave;
    //outros campos
}TipoItem;

//tipo exportado
//define o TipoArvore que é o tipo das células que contêm os elementos que são manipulados pelo TAD árvore binária
typedef struct arvore
{
    TipoItem item;
    struct arvore *esquerda;
    struct arvore *direita;
}TipoArvore;

//tipo exportado
//define o TipoCelula que é o tipo das células que contêm os elementos que são manipulados pelos TADs fila e pilha
typedef struct celula
{
    TipoArvore **item;
    struct celula *proximo;
}TipoCelula;

//-----TAD árvore binária-----

//funções exportadas
//cria uma árvore binária vazia
void CriaArvoreBinariaVazia(TipoArvore **arvore);

//testa se a árvore binária é vazia
int TestaArvoreBinariaVazia(TipoArvore **arvore);

//cria uma árvore binária
void CriaArvoreBinaria(TipoItem item, TipoArvore **arvore, TipoArvore **esquerda, TipoArvore **direita);

//libera a árvore binária
TipoArvore * LiberaArvoreBinaria(TipoArvore **arvore);

//verifica se um elemento pertence à árvore binária
int PertenceArvoreBinaria(TipoArvore **arvore, TipoItem item);

//imprime os elementos da árvore binária
void ImprimeArvoreBinaria(TipoArvore **arvore, int l);

//percorre os elementos da árvore binária em pré-ordem
void PercorreArvoreBinariaPreOrdem(TipoArvore **arvore);

//percorre os elementos da árvore binária em ordem simétrica
void PercorreArvoreBinariaOrdemSimetrica(TipoArvore **arvore);

//percorre os elementos da árvore binária em pós-ordem
void PercorreArvoreBinariaPosOrdem(TipoArvore **arvore);

//percorre os elementos da árvore binária em nível
void PercorreArvoreBinariaLargura(TipoArvore **arvore);

//percorre os elementos da árvore binária em nível
void PercorreArvoreBinariaProfundidade(TipoArvore **arvore);

//calcula a altura de um nó da árvore binária
int CalculaAlturaArvoreBinaria(TipoArvore **arvore);

//-----TAD pilha-----

//tipo exportado
//define o TipoPilha que é o tipo do TAD pilha
typedef struct
{
    TipoCelula *topo;
    TipoCelula *fundo;
}TipoPilha;

//funções exportadas
//cria uma pilha vazia
void CriaPilhaVazia(TipoPilha *pilha);

//testa se a pilha é vazia
int TestaPilhaVazia(TipoPilha *pilha);

//insere um elemento do tipo TipoArvore na pilha
void InserePilha(TipoPilha *pilha, TipoArvore **item);

//remove um elemento do tipo TipoArvore da pilha
void RemovePilha(TipoPilha *pilha, TipoArvore **item);

//-----TAD fila-----

//tipo exportado
//define o TipoFila que é o tipo do TAD fila
typedef struct
{
    TipoCelula *frente;
    TipoCelula *tras;
}TipoFila;

//funções exportadas
//cria uma fila vazia
void CriaFilaVazia(TipoFila *fila);

//testa se a fila é vazia
int TestaFilaVazia(TipoFila *fila);

//insere um elemento do tipo TipoArvore na fila
void InsereFila(TipoFila *fila, TipoArvore **item);

//remove um elemento do tipo TipoArvore da fila
void RemoveFila(TipoFila *fila, TipoArvore **item);
